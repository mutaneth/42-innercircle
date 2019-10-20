/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:24:31 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/20 18:46:35 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "mlx.h"
#include "math.h"
#include "stdlib.h"

#define WIDTH 500
#define HEIGHT 500

typedef struct  s_event
{
   float       zoom;
   float       horiz;
   float       vertic;
   float          mouse_x;
   float           mouse_y;
}               t_event;

typedef struct  s_frct
{
   void         *win;
   void         *mlx;
   void         *img;
   int          bpp;
   int         *data;
   int          line_size;
   int          endian;
   int          x;
   int          y;
   int          color;
   char         *choose_fractal;
   t_event      evnt;
}               t_frct;

void    mandelbrot(t_frct *fractol);
void    julia(t_frct *fractol);
void    carpet(t_frct *fractol);