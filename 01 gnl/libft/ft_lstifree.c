/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstifree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 00:27:41 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/01 19:38:21 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstifree(t_lsti **tmp)
{
	t_lsti *lst;
	t_lsti *t;

	lst = *tmp;
	while (lst)
	{
		if (lst->content)
			free(lst->content);
		t = lst;
		lst = lst->next;
		free(t);
	}
	free(*tmp);
}
