/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 02:05:50 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 06:10:33 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void ft_freelst
//free tmp=lst

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlst;
	t_list *tmp;
	t_list *res;

	tmp = lst;
	if (!lst || !f)
		return (NULL);
	while (lst->next)
	{
		if (!(nlst = ft_lstnew(tmp->content, tmp->content_size)))
		{
//			ft_freelst(nlst)
			return (NULL);
		}
		nlist = f(tmp);
	}
	return (res);
}
