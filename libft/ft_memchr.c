/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 22:27:34 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 22:41:40 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char *)s;
	while (i < n && str)
	{
		if (str[i] == c)
			return ((void *)(str + i));
		else
			i++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	printf("memchr: %s\n", memchr(av[1], 'r', 4));
	printf("ft_memchr: %s\n", ft_memchr(av[1], 'r', 4));
	return (0);
}
