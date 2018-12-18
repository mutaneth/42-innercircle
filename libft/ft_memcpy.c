/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:57:40 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 19:05:24 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = (char *)dst;
	s = (const char *)s;
	while (i < n && s && d)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}

int main(int ac, char **av)
{
	printf("memcpy: %s\n", memcpy(av[1], av[2], 2));
	printf("ft_memcpy: %s\n", ft_memcpy(av[1], av[2], 2));
	return (0);
}
