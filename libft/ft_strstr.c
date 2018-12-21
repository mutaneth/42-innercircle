/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:52:47 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/20 03:23:36 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
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
		while (haystack[i] && needle[j] && haystack[i] == needle[j])
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
