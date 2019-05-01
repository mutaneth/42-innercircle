/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:57:23 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/17 18:10:56 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	size_t n;
	n = 2;
	printf("strncmp: %d\n", strncmp(av[1], av[2], n));
	printf("ft_strncmp: %d\n", ft_strncmp(av[1], av[2], n));
	return (0);
}
