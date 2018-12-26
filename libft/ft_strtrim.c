/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:33:47 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/26 22:46:04 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	while (i <= ft_strlen(s))
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
		{
			while (j <= ft_strlen(s))
			{
				res[j] = s[i];
				i++;
				j++;
			}
		}
	}
	res[j] = '\0';
	return ((char *)res);
}
