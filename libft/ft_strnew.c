/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 01:08:14 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/27 21:45:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*strnew;

	if (!(strnew = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		strnew[i] = '\0';
		i++;
	}
	return (strnew);
}
