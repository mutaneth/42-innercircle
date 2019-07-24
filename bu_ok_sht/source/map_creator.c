/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:39:13 by ddratini          #+#    #+#             */
/*   Updated: 2019/07/23 21:39:15 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int			fgr_count(t_fgr *fgrlst)
{
	int		c;
	t_fgr	*tmpl;

	if (!fgrlst)//?
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

char		**mapc(int flg)//, int c_fg)/* creates the minimal start map*/
{
	char	**map;
	int		i;

	i = -1;
	if (!(map = (char**)malloc((flg + 1) * sizeof(char *))))
		return (NULL);//free
	while (++i < flg)
	{
		if (!(map[i] = (char*)malloc(sizeof(char) * (flg + 1))))
			return (NULL);//free
		ft_memset(map[i], '.', flg);
		map[i][flg] = '\0';
	}
	map[i] = 0;
	return (map);
}

void		map_free(char **map, int fgc)//t_fgr *fgrlst)
{
	int i;

	i = -1;
	if (map)
	{
		while (++i < fgc)
			free(map[i]);
	//	free(*map);
		free(map);
	}
}

/* char	**mapc(int s)
{
	char	**map[s][s];
	int		i;
	int		j;

	i = -1;
	while (++i < s)
	{
		j = -1;
		while (++j < s)
			map[i][j] = '.';
	}
	return (map);
}
*/
