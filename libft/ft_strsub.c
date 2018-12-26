/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 20:05:37 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/26 21:04:01 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s || !s[start] || !len)
		return (NULL);
	if (!(res = ft_memalloc(sizeof(char) * len)))
		return (NULL);
	while (i < len && s[start])
	{
		res[i] = (char)s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (ft_strdup(res));
}
