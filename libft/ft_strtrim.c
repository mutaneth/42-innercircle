/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 05:59:46 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 06:51:57 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trim_i(char *s)
{
	size_t i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	return (i);
}

static size_t	ft_trim_j(char *s)
{
	size_t j;

	j = ft_strlen(s) - 1;
	while ((j > 0) && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	return (j);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	*res;

	if (!s)
		return (NULL);
	i = ft_trim_i((char *)s);
	j = ft_trim_j((char *)s);
	len = j - i + 1;
	if (i > j)
		return ("\0");
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	k = 0;
	while (s[i] && i <= j)
	{
		res[k] = s[i++];
		k++;
	}
	res[k] = '\0';
	return (res);
}
