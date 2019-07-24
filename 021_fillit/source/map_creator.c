/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:16 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 22:26:25 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (i - 1);
}

int			fgr_count(t_fgr *fgrlst)
{
	int		c;
	t_fgr	*tmpl;

	if (!fgrlst)
		return (0);
	c = 1;
	tmpl = fgrlst;
	while (tmpl->next)
	{
		c++;
		tmpl = tmpl->next;
	}
	return (c);
}

char		**mapc(int flg)
{
	char	**map;
	int		i;

	i = -1;
	if (!(map = (char**)malloc((flg + 1) * sizeof(char *))))
		return (NULL);
	while (++i < flg)
	{
		if (!(map[i] = (char*)malloc(sizeof(char) * (flg + 1))))
			return (NULL);
		ft_memset(map[i], '.', flg);
		map[i][flg] = '\0';
	}
	map[i] = 0;
	return (map);
}

void		map_free(char **map, int fgc)
{
	int i;

	i = -1;
	if (map)
	{
		while (++i < fgc)
			free(map[i]);
		free(map);
	}
}
