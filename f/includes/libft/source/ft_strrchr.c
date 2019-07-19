/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 18:41:37 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/24 19:50:06 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	tmp;
	size_t	k;

	tmp = 0;
	k = 0;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	i = 0;
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			tmp = i;
			i++;
			k++;
		}
		else
			i++;
	}
	if (k != 0)
		return ((char *)(s + tmp));
	return (NULL);
}
