/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 05:52:33 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/29 09:11:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sizeofint(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		if (n >= -9)
			return (2);
		n = (n / 10) * (-1);
		i += 2;
	}
	while ((n / 10) != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_mallocsign(int n)
{
	char	*str;
	int		size;

	size = ft_sizeofint(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*res;
	int		i;

	size = ft_sizeofint(n);
	i = size - 1;
	res = ft_mallocsign(n);
	if (n < 0)
	{
		res[0] = '-';
		if (n < -9)
		{
			res[i] = ((n % 10) * (-1)) + '0';
			n = (n / 10) * (-1);
			i--;
		}
	}
	while (i >= 0 && (n / 10))
	{
		res[i--] = (n % 10) + '0';
		n = n / 10;
	}
	res[i] = (n % 10) * (n < 0 ? -1 : 1) + '0';
	return (res);
}
