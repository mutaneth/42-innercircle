/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:37:05 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/30 00:14:02 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void **str1, void **str2, size_t len)
{
	char	*tmp;
	size_t	i;
	char	**s1;
	char	**s2;

	s1 = (char **)str1;
	s2 = (char **)str2;
	i = 0;
	while (i < len)
	{
		tmp = *s1;
		(*s1)[i] = (*s2)[i];
		(*s2)[i] = *tmp;
		i++;
	}
}
