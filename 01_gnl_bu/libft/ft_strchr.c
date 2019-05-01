/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 16:59:19 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/24 18:36:38 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	i = 0;
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		else
			i++;
	}
	return (NULL);
}
