/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 22:45:56 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 23:20:00 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	return (ft_strcmp(s1, s2, n));
}

int	main(int ac, char **av)
{
	printf("memcmp: %d\n", memcmp(av[1], av[2], 10));
	printf("ft_memcmp: %d\n", ft_memcmp(av[1], av[2], 10));
	return (0);
}