/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 22:13:52 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/20 01:14:42 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = (unsigned char)s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		d[i] = s[i];
		return ((void *)(d + ++i));
	}
	else
		return (NULL);
}
