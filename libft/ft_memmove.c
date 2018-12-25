/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:25:58 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/21 19:14:42 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int			*d;
	const unsigned int		*s;
	size_t					i;

	i = 0;
	d = (unsigned int *)dst;
	s = (const unsigned int *)src;
	while (i < (len - 1))
	{
		if (s < d)
			d[i] = s[i];
		else if (s > d)
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
int main()
{
	unsigned char src[10] = "1234567890";
	printf ("src old: %s\n", src);
	printf ("ft src old: %s\n", src);
	memmove (&src[4], &src[3], 3);
	ft_memmove (&src[4], &src[3], 3);
	printf ("src new: %s\n", src);
	printf ("ft src new: %s\n", src);
	return (0);
}*/
