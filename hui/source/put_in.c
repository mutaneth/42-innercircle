/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 22:42:11 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 21:49:31 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

int		rcrs(char ***minmap, t_fgr *fgrlst)
{
	int		i;
	int		y;
	int		xt;
	char	**min_map;

	min_map = *minmap;
	y = -1;
	while (min_map[++y])
	{
		xt = -1;
		while (min_map[y][++xt])
		{
			i = -1;
			if (min_map[y][xt] == '.')
				if (putin(min_map, fgrlst, y, xt) == 4)
				{
					place(min_map, fgrlst, y, xt);
					if (fgrlst->next)
					{
						if (rcrs(&min_map, fgrlst->next))
							return (1);
						dot(min_map, fgrlst);
					}
					if (!(fgrlst->next))
						return (2);
				}
		}
	}
	return (0);
}

int		twenty_one(char **map, t_fgr *fgr, int y, int x)
{
	int f;
	int k;
	int size;

	if (!fgr)
		return(0);
	if (fgr->fgr_int == 29)
	{
		fgr->fgr_int  = (fgr->fgr_int << 2);
	}
	size = ft_strlen(map[0]);
	if (map[y] && map[y][x])
		if (map[y][x] == '.')
		{
			k = -1;
			f = 0;
			while (++k <= 12)
				if ((fgr->fgr_int >> k) & 1 && (y+k / 4 < size) &&
					(x + (k % 4) - 2 >= 0) && x + (k % 4) - 2 < size &&
					map[y + k / 4][x + k % 4  - 2] == '.')
					++f;
			if (f == 4)
				return(4);
		}
	return (0);
}
int		six(char **map, t_fgr *fgr, int y, int x)
{
	int f;
	int k;
	int chi;
	int size;

	if (!fgr)
		return (0);
	chi = fgr->fgr_int;
	if (fgr->fgr_int == 29 || fgr->fgr_int == 29 * 2 * 2)
		return (twenty_one(map, fgr, y , x));
	else if (chi == 281 || chi == 401 || chi == 57 || chi == 27 || chi == 153)
		fgr->fgr_int  = (fgr->fgr_int << 1);
	size = ft_strlen(map[0]);
	if (map[y] && map[y][x])
			if (map[y][x] == '.')
			{
				k = -1;
				f = 0;
				while (++k <= 12)
				{
				if ((fgr->fgr_int >> k) & 1 && (y+k/4 < size) &&
					(x + (k % 4) - 1 >= 0) && x + (k % 4) - 1 < size &&
					map[y + k/4][x + k%4  - 1] == '.')
										++f;
				}
				if (f == 4)
					return (4);
			}
	return (0);
}

int		putin(char **map, t_fgr *fgr, int y, int x)
{
	int f;
	int k;
	int c;
	int size;

	c = fgr->fgr_int;
	if (c == 281 || c == 401 || c == 57 || c == 27 || c == 153 || c == 29 ||
		c == 562 || c == 802 || c == 114 || c == 54 || c == 306 || c == 116)
		return (six(map, fgr, y, x));
	size = ft_strlen(map[0]);
		if (map[y] && map[y][x])
			if (map[y][x] == '.')
			{
				k = -1;
				f = 0;
				while (++k <= 12)
					if ((fgr->fgr_int >> k) & 1 && (y + k / 4 < size) && (x + k % 4 < size)
						&& (map[y + k / 4][x + k % 4] == '.'))
						++f;
				if (f == 4)
					return (4);
			}
	return (0);
}
