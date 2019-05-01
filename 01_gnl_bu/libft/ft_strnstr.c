/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:26:08 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 06:26:05 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (!(*nee))
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i] && nee[j] && hay[i] == nee[j] && j < len && i < len)
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
