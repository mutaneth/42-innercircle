/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstifree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 00:27:41 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 02:14:37 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstifree(t_lsti **lst)
{
	t_lsti *tmp;
	t_lsti *t;

	tmp = *lst;
	while (tmp)
	{
		if (lst->content)
		{
			ft_lstidel();
		}
		t = lst;
		lst = lst->next;
		ft_free(t->content);
	}
	ft_free(*tmp);
}
