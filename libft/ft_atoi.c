/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:21:23 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 09:58:52 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_fill_nb(char *s)
{
	unsigned long	i;
	long long		nb;
	int				k;

	k = 1;
	i = 0;
	nb = 0;
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
	return ((long long)(nb * k));
}

int					ft_atoi(const char *str)
{
	long long		nb;
	char			*s;

	s = (char*)str;
	nb = ft_fill_nb(s);
	if (nb > 0 && nb + 1 > 9223372036854775806)
		return (-1);
	if (nb < 0 && nb - 1 < -9223372036854775807)
		return (0);
	return ((int)nb);
}
