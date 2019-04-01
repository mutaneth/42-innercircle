/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:32:34 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/17 16:50:44 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (haystack[i])
	{
		j = ft_strlen(needle);
		k = 0;
		while (needle[j] && j)
		{
			if (haystack[i] != needle[j])
				i++;
			else
			{
				i++;
				j--;
				k++;
			}
		}
	}
	if (k = 0)
		return (NULL);
	else
		return (haystack[j]);
}
