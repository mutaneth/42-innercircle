/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:18:34 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/20 19:18:36 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "stdio.h"

int				ft_close(void *param)
{
    t_frct *frc;

    frc = (t_frct *)param;
    exit(1);
	return (0);
}

void            rerender(t_frct *fractol)
{
    mlx_clear_window(fractol->mlx, fractol->win);
    // mandelbrot(fractol);
    julia(fractol);
  //  carpet(fractol);
    mlx_put_image_to_window(fractol->mlx, fractol->win, fractol->img, 0, 0);
}

int             mouse_event(int mousecode, int x, int y, void *param)
{
    t_frct *fractol;

    fractol = (t_frct *)param;
    if (x > WIDTH || y >= HEIGHT || x < 0 || y < 0)
		return (0);  
	if (mousecode == 4 || mousecode == 1)
	{
		fractol->evnt.zoom -= (fractol->evnt.zoom * 0.05);
		fractol->evnt.horiz += (float)x
				* fractol->evnt.zoom * 0.05;
		fractol->evnt.vertic += (float)y
				* fractol->evnt.zoom * 0.05;
        rerender(fractol);
        
	}
	else if (mousecode == 5 || mousecode == 2)
	{

		fractol->evnt.zoom += (fractol->evnt.zoom * 0.05);
		fractol->evnt.horiz -= (float)x
				* fractol->evnt.zoom * 0.05;
		fractol->evnt.vertic -= (float)y
				* fractol->evnt.zoom * 0.05;
       rerender(fractol);
    }
    return (0);
}

int        mouse_move(int x, int y, void *param)
{
    t_frct *fractol;

    fractol = (t_frct *)param;

	if (x > WIDTH || y > HEIGHT || x < 0 || y < 0)
		return (0);
	fractol->evnt.mouse_x = (float)x * fractol->evnt.zoom;
	fractol->evnt.mouse_y = (float)y * fractol->evnt.zoom;
    rerender(fractol);
	return (0);
}

int             key_event(int keycode, void *param)
{
    t_frct *fractol;

    fractol = (t_frct *)param;
    if (keycode == 53)
        ft_close(fractol);
    else if (keycode == 69)
    {
        fractol->evnt.zoom -= 0.0001;
        rerender(fractol);
    }
    else if (keycode == 78)
    {
        fractol->evnt.zoom += 0.0001;
       rerender(fractol);
    }
    return(0);   
}

void    init_img(t_frct *fractol)
{
    fractol->img = mlx_new_image(fractol->mlx, WIDTH, HEIGHT);
    fractol->data = (int *)mlx_get_data_addr(fractol->img, &fractol->bpp, &fractol->line_size, &fractol->endian);
    // fractol->bpp /= 8;
}

void    put_pixel_to_img(int *data, int x, int y, int color)
{
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
        data[x + y * WIDTH] = color;
}

int			rgb_to_hex(int r, int g, int b)
{
	int		res;
	int		alpha;

    res = 0;
	alpha |= 16777215;
	res = r << 16 | g << 8 | b;
	res &= alpha;
	return (res);
}

void    fractol_init(t_frct *fractol)
{
    fractol->x = 0;
    fractol->y = 0;
    fractol->evnt.zoom = 0.008;
    fractol->evnt.horiz = -((WIDTH / 2) * fractol->evnt.zoom);
    fractol->evnt.vertic = -((HEIGHT / 2) * fractol->evnt.zoom);
}

void    mandelbrot(t_frct *fractol)
{
    int x = 0;
    int y = 0;
    while (y < HEIGHT)
    {
        x = 0;
        while (x < WIDTH)
        {
            float	tmp;
	        float z_r;
	        float z_i;
            float c_r;
            float c_i;

            c_r = (float)x * fractol->evnt.zoom + fractol->evnt.horiz;
            c_i = (float)y * fractol->evnt.zoom + fractol->evnt.vertic;
            z_r = 0;
            z_i = 0;
            int it = 0;
            while (z_i * z_i + z_r * z_r <= 4 && it < 30)
            {
                tmp = z_r;
		        z_r = tmp * tmp - z_i * z_i + c_r;
		        z_i = 2 * tmp * z_i + c_i;
                it++;
            }
            if (it >= 30)
                put_pixel_to_img(fractol->data, x, y, 0x000000);
            else
                put_pixel_to_img(fractol->data, x, y, rgb_to_hex(255 - 13 * it, 255 -  9 * it,  255 - 4 * it));
            x++;
        }
        y++;
    }
}

void    julia(t_frct *fractol)
{
    int x = 0;
    int y = 0;
    while (y < HEIGHT)
    {
        x = 0;
        while (x < WIDTH)
        {
            float	tmp;
            float c_r;
            float c_i;

            c_r = (float)x * fractol->evnt.zoom + fractol->evnt.horiz;
	        c_i = (float)y * fractol->evnt.zoom + fractol->evnt.vertic;
            int it = 0;
            while (c_i * c_i + c_r * c_r <= 4 && it < 30)
            {
                tmp = c_i;
                c_i = c_i * c_i - c_r * c_r + fractol->evnt.mouse_x;
                c_r = 2.0 * tmp * c_r + fractol->evnt.mouse_y;
                it++;
            }
            if (it >= 30)
                put_pixel_to_img(fractol->data, x, y, 0x000000);
            else
                put_pixel_to_img(fractol->data, x, y, rgb_to_hex(255 - 13 * it, 255 -  9 * it,  255 - 4 * it));
            x++;
        }
        y++;
    }
}

void    carpet(t_frct *fractol)
{
    int x = 0;
    int y = 0;
    while (y < HEIGHT)
    {
        x = 0;
        while (x < WIDTH)
        {
               int		i;

                i = 0;
                int it = 0;
                int x_x = (float)x * fractol->evnt.zoom + fractol->evnt.horiz;
                int y_y = (float)y * fractol->evnt.zoom + fractol->evnt.vertic;
                x_x = abs(x_x);
                y_y = abs(y_y);
                while ((x_x > 0 || y_y > 0) && it < 120)
                {
                    if (x_x % 3 == 1 && y_y % 3 == 1)
                        break;
                    x_x /= 3;
                    y_y /= 3;
                    it++;
	            }
            if (it >= 120)
                put_pixel_to_img(fractol->data, x, y, 0x000000);
            else
                put_pixel_to_img(fractol->data, x, y, rgb_to_hex(255 - 13 * it, 255 -  9 * it,  255 - 4 * it));
            x++;
        }
        y++;
    }
}

void    render(t_frct *fractol)
{
    mlx_clear_window(fractol->mlx, fractol->win);
    // mandelbrot(fractol);
     julia(fractol);
    //carpet(fractol);
    mlx_put_image_to_window(fractol->mlx, fractol->win, fractol->img, 0, 0);
}

int     main(int argc, char **argv)
{
    t_frct *fractol;

    if (argc == 1 && argv)
	{
		ft_putstr("usage: ./fractol fractal_name\n");
		ft_putstr("fractal_name: mandelbrot\n");
		exit(32);
	}
    if (!(fractol = ft_memalloc(sizeof(t_frct))))
        exit (-1);
    fractol->mlx = mlx_init(fractol->mlx);
    fractol_init(fractol);
    fractol->win = mlx_new_window(fractol->mlx, WIDTH, HEIGHT, "fractol");
    init_img(fractol);
    mlx_clear_window(fractol->mlx, fractol->win);
    render(fractol);
    mlx_hook(fractol->win, 17, 0, &ft_close, fractol);
    mlx_hook(fractol->win, 2, 0, &key_event, fractol);
    mlx_hook(fractol->win, 4, 0, &mouse_event, fractol);
    mlx_hook(fractol->win, 6, 0, &mouse_move, fractol);
    mlx_loop(fractol->mlx);
    return(0);
}