/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 22:49:13 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/11 23:20:00 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len && dst[i])
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int	main(void)
{
	char sr[10] = "abc";
	char ds[10] = "wcwcvfs";

	char *dds = ft_strncpy(ds, sr, 2);
	printf("%s\n", dds);
	return (0);
}
