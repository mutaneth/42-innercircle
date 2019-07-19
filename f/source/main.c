/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 16:33:24 by ddratini          #+#    #+#             */
/*   Updated: 2019/07/19 20:48:25 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_max(int fd)
{
	int		ret;
	char	buf[546];

	if ((ret = read(fd, buf, 546)) == 546 || ret == -1)
	{
		ft_putendl("error");
		exit(0);
	}
	else
	{
		close(fd);
		return (1);
	}
}

int		st(char **av)/* return fd if ok st */
{
	int	fd;

	fd = open(av[1], O_RDONLY);
	if (read_max(fd) == 0)
	{
		close(fd);/* added: check max read bytes*/
		exit(0);//need free?? exit??
	}
	close(fd);//mb thats why
	fd = open(av[1], O_RDONLY);
	if (!(check_n(fd)))
	{
		ft_putendl("error");
		close(fd);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	return (fd);
}

void	build_f(t_fgr *r)
{
	int		c;
	int		i;
	char	**map;
	t_fgr	*fgrlist;//???
	int		flg;

	fgrlist = r;
	flg = 2;
	c = fgr_count(fgrlist);
	flg = ft_sqrt(c * 4);
	i = -1;
	map = mapc(flg);
	if (map)
	{
		while (rcrs(&map, r) == 0)
		{
			map_free(map, flg);
			++flg;
			map = mapc(flg);
		}
	}
	print_map(map);
}

int		main(int ac, char **av)
{
	t_fgr	*r;
	int		fd;
	t_fgr	*tmp;

	if (ac != 2)
	{
		ft_putendl("usage: ./fillit tetro_file!");
		return (1);
	}
	if (!(fd = st(av)))
		return (1);
	if ((r = mega_fgr_val(fd)) == NULL)
	{
		ft_putendl("error");
		return (0);
	}
	else
	{
		tmp = r;
		build_f(r);
		// free_fgr(r);
		// free_fgr(tmp);
		close(fd);
	}
	return (0);
}
