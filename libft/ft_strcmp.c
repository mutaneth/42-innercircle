/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:44:56 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/21 03:10:05 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while ((const unsigned char)s1[i] && (const unsigned char)s2[i])
	{
		if ((const unsigned char)s1[i] == (const unsigned char)s2[i])
			i++;
		else
			break ;
	}
	return ((const unsigned char)s1[i] - (unsigned char)s2[i]);
}
