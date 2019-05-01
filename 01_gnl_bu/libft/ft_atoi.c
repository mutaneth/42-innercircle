/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:21:23 by hfalmer           #+#    #+#             */
/*   Updated: 2019/03/14 22:59:05 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	i;
	unsigned long long	nb;
	int					k;
	char				*s;

	i = 0;
	nb = 0;
	k = 1;
	s = (char *)str;
	while (s[i])
	{
		while (ft_isspace(s[i]))
			i++;
		if (s[i] == '+' || s[i] == '-')
			k *= s[i++] == '-' ? -1 : 1;
		while (ft_isdigit(s[i]))
		{
			nb = nb * 10 + (s[i] - '0');
			i++;
		}
		if (nb > 9223372036854775807)
			return (k < 0) ? 0 : -1;
		break ;
	}
	return ((int)(nb * k));
}
