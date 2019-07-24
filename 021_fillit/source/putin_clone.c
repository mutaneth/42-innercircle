/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putin_clone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:25:06 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 22:58:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_map(char **map)
{
	int u;

	u = -1;
	while (map[++u])
	{
		ft_putstr(map[u]);
		ft_putchar('\n');
	}
}

void	dot(char **map, t_fgr *fi)
{
	int		y;
	int		x;
	char	bu;

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

int		place(char **map, t_fgr *fgr, int y, int x)
{
	int k;
	int c;
	int f;

	k = -1;
	f = 4;
	c = fgr->fgr_int;
	if (c == 281 * 2 || c == 802 || c == 57 * 2 || c == 27 * 2 || c == 153 * 2)
	{
		while (++k <= 12)
			if ((fgr->fgr_int >> k) & 1 && map[y + k / 4][x + k % 4 - 1] && f--)
				map[y + k / 4][x + (k % 4) - 1] = fgr->fgr_chr;
		return (f == 0) ? 2 : 0;
	}
	if (c == 29 || c == 29 * 4)
	{
		while (++k <= 12)
			if ((fgr->fgr_int >> k) & 1 && f--)
				map[y + k / 4][x + (k % 4) - 2] = fgr->fgr_chr;
		return (f == 0) ? 29 : 0;
	}
	while (++k <= 12)
		if ((fgr->fgr_int >> k) & 1)
			map[y + k / 4][x + (k % 4)] = fgr->fgr_chr;
	return (f == 0) ? 1 : 0;
}

t_fgr	*al_chck(char **line, t_fgr *fgr)
{
	if (!(*line))
	{
		free_fgr(fgr);
		free(*line);
	}
	return (fgr);
}
