/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsticnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:38:59 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 03:53:45 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lsticount(t_lsti *lst)
{
	int		i;
	t_lsti	*tmpl;

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
