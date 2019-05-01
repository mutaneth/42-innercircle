/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:16:27 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/31 23:11:22 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return ((void *)str);
}
