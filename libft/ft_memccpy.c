/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 22:13:52 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 01:57:34 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	while (i < n && s[i] != c)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == c)
		return ((void *)(d +i));
	else
		return (NULL);
}

/*int	main(int ac, char **av)
{
	printf("memccpy: %s\n%s\n", memccpy(av[1], av[2], ' ', 2), av[1]);
	printf("ft_memccpy: %s\n%s\n", ft_memccpy(av[1], av[2], ' ', 2), av[1]);
	return (0);
}*/
