/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 01:18:45 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/29 00:30:17 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
/* 	size_t	i;*/
	if (!*as)
		return ;
	free(as);/*
	i = 0;
	while (as)
	{
		*as[i] = '\0';
		i++;
	}*/
}