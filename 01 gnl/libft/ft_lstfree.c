/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 00:27:41 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 01:27:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **tmp)
{
	t_list *lst;
	t_list *t;

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
