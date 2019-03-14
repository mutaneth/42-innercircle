/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 00:27:41 by hfalmer           #+#    #+#             */
/*   Updated: 2019/03/15 00:30:27 by hfalmer          ###   ########.fr       */
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
