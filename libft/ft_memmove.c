/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:25:58 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/10 05:31:14 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < (len - 1))
	{
		if (s > d)
			d[i] = s[i];
		else if (s < d)
			d[i] = s[len - i];
		else
			break ;
		i++;
	}
	return ((void *)d);
}
/*
#include <string.h>
#include <stdio.h>
char main()
{
	unsigned char src[10] = "1234567890";
	prcharf ("src old: %s\n", src);
	prcharf ("ft src old: %s\n", src);
	memmove (&src[4], &src[3], 3);
	ft_memmove (&src[4], &src[3], 3);
	prcharf ("src new: %s\n", src);
	prcharf ("ft src new: %s\n", src);
	return (0);
}*/
