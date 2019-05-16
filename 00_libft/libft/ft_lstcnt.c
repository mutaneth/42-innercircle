/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:41:10 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 03:54:16 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount(t_list *lst)
{
	int		i;
	t_list	*tmpl;

	if (!lst)
		return (0);
	i = 1;
	tmpl = lst;
	while (tmpl->next)
	{
		i++;
		tmpl = tmpl->next;
	}
	return (i);
}
