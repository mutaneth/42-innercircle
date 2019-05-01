/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:15:36 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 07:59:43 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s == d || !len)
		return ((void*)d);
	if (s < d)
	{
		i = len;
		while (--i)
			d[i] = s[i];
		d[i] = s[i];
	}
	else
	{
		i = 0;
		d[i] = s[i];
		while (++i < len)
			d[i] = s[i];
	}
	return ((void*)d);
}
