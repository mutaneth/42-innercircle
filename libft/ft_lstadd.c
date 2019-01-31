/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:01:02 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/28 23:59:22 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list tmp;

	tmp = ft_newcont(new);
	if (!(*alst))
	{
		*alst = tmp;
		return ;
	}
	tmp->next = *alst;
	*alst = tmp;
}
