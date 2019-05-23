/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 03:40:51 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/23 04:15:49 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fgr_count(t_fgr *fgrlst)/* just count fgrs*/
{
	int		c;
	t_fgr	*tmpl;

	if (!lst)
		return (0);
	c = 1;
	tmpl = fgrlst;
	while (tmpl->next)
	{
		c++;
		tmpl = tmpl->next
	}
	return (c);
}

char	**min_map(t_fgr *fgrlst)/* creates the minimal start map*/
{
	int		c;
	int		s;
	char	**min_map;

	c = fgr_count(fgrlst);
	s = sqrt(c * 4);
	//tut cheta est'
	return (min_map);
}
