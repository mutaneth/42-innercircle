/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstidel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 22:25:48 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/01 19:18:27 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstidel(t_lsti **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && (*alst)->next)
		ft_lstidel(&((*alst)->next), del);
	ft_lstidelone(alst, del);
}
