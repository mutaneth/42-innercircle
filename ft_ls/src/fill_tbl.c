/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tbl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 07:59:54 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:16:10 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	fill_tbl(t_list *l, t_tblp *tb)
{
	tb->owname = 1;
	tb->grname = 1;
	tb->size = 1;
	while (l)
	{
		if (get_group_tabs((const t_finf *)(l->content)) > tb->grname)
			tb->grname = get_group_tabs((const t_finf *)(l->content));
		if (get_owner_tabs((const t_finf *)(l->content)) > tb->owname)
			tb->owname = get_owner_tabs((const t_finf *)(l->content));
		if (get_size_tabs((const t_finf *)(l->content)) > tb->size)
			tb->size = get_size_tabs((const t_finf *)(l->content));
		l = l->next;
	}
}
