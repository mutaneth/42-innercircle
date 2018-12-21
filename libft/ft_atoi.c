/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:21:23 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/21 03:51:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	i;
	long long	nb;
	int			k;

	i = 0;
	nb = 0;
	k = 1;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n'
				|| str[i] == '\t' || str[i] == '\f' || str[i] == '\v')
			i++;
		if (str[i] == '+' || str[i] == '-')
			k *= str[i++] == '-' ? -1 : 1;
		while (str[i] <= '9' && str[i] >= '0')
		{
			nb = nb * 10 + (str[i] - '0');
			i++;
		}
		break ;
	}
	return ((int)(nb * k));
}
