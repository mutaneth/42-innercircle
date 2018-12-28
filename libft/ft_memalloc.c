/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:16:27 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/27 21:38:38 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return ((void *)str);
}
