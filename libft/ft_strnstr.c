/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:26:08 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/10 22:01:36 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	if (!(*nee))
		return ((char *)hay);
	while (hay[i] && i < (len - 1))
	{
		j = 0;
		while (hay[i] && nee[j] && hay[i] == nee[j] && j < len && i < (len - 1))
		{
			if (j == 0)
				res = i;
			i++;
			j++;
		}
		if (j == ft_strlen(nee))
			return ((char *)&hay[res]);
		if (j)
			i = res + 1;
		else
			i++;
	}
	return (NULL);
}
