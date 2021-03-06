/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putin_clone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:25:06 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 21:25:20 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		print_map(char **map)
{
	int u;

	u = -1;
	while (map[++u])
	{
		ft_putstr(map[u]);
		ft_putchar('\n');
	}
}

void		dot(char **map, t_fgr *fi)
{
	int y;
	int x;
	char bu;

	bu = fi->fgr_chr;
	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (map[y][x] == bu)
				map[y][x] = '.';
		}
	}
}