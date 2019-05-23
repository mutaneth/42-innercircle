/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstimap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:41:52 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 01:58:30 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lsti	*ft_lstimap(t_lsti *lst, t_lsti *(*f)(t_lsti *elem))
{
	t_lsti *res;
	t_lsti *tmp;

	if (!lst || !f)
		return (NULL);
	res = f(lst);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = f(lst)))
			ft_lstifree(&tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
