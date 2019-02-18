/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:41:52 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/18 17:26:54 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freelst(t_list **tmp)
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

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	res = f(lst);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = f(lst)))
			ft_freelst(&tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
