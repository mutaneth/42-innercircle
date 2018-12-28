/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:21:23 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/27 23:57:38 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	i;
	unsigned long	nb;
	int				k;
	char			*s;

	i = 0;
	nb = 0;
	k = 1;
	s = (char *)str;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\r' || s[i] == '\n'
				|| s[i] == '\t' || s[i] == '\f' || s[i] == '\v')
			i++;
		if (s[i] == '+' || s[i] == '-')
			k *= s[i++] == '-' ? -1 : 1;
		while (ft_isdigit(s[i]))
		{
			nb = nb * 10 + (s[i] - '0');
			i++;
		}
		break ;
	}
	return ((int)(nb * k));
}
