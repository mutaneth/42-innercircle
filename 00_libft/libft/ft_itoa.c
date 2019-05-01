/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 05:52:33 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 08:33:02 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeofint(int n)
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

static char	*ft_mallocsign(int n)
{
	char	*str;
	int		size;

	size = ft_sizeofint(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	return (str);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*res;

	size = ft_sizeofint(n);
	if (!(res = ft_mallocsign(n)))
		return (NULL);
	res[size] = '\0';
	size--;
	if (n < 0)
	{
		res[0] = '-';
		if (n < -9)
		{
			res[size] = ((n % 10) * (-1)) + '0';
			n = (n / 10) * (-1);
			size--;
		}
	}
	while (size >= 0 && (n / 10))
	{
		res[size--] = (n % 10) + '0';
		n = n / 10;
	}
	res[size] = (n % 10) * (n < 0 ? -1 : 1) + '0';
	return (res);
}
