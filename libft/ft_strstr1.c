/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:52:47 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/17 17:40:55 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//delete strlen

int		ft_strlen(const char *str)
{
	size_t	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j])
		{
			if (j == 0)
				res = i;
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[res]);
		i++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("strstr: %s\n", strstr(av[1], av[2]));
	printf("ft_strstr: %s\n", ft_strstr(av[1], av[2]));
	return (0);
}
