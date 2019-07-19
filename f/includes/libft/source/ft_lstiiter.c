/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 21:11:04 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/01 19:24:22 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiiter(t_lsti *lst, void (*f)(t_lsti *elem))
{
	if (!lst)
		return ;
	while (lst->next)
	{
		f(lst);
		lst = lst->next;
	}
	f(lst);
}
