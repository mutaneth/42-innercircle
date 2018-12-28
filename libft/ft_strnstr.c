/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:26:08 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/28 21:18:41 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] && needle[j] && haystack[i] == needle[j] && j < len)
		{
			if (j == 0)
				res = i;
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[res]);
		if (j)
			i = res + 1;
		else
			i++;
	}
	return (NULL);
}
