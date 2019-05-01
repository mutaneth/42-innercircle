/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 02:17:42 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 00:38:14 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*res;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = (size_t)ft_strlen(s);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
