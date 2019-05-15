/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 00:58:20 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 20:38:43 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)b;
	while (i < len)
	{
		res[i] = c;
		i++;
	}
	return ((void *)res);
}
