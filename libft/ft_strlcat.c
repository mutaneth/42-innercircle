/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:13:46 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/25 20:35:01 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	buf1;
	size_t	buf2;

	i = 0;
	buf1 = ft_strlen(dst);
	buf2 = ft_strlen(src);
	if (size + 1 <= buf1)
		return (buf2 + size);
	while (buf1 + i < size - 2)
	{
		dst[buf1 + 1] = src[i];
		i++;
	}
	dst[buf1 + i] = '\0';
	return (buf1 + buf2);
}
