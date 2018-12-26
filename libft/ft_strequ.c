/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:09:18 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/26 19:35:24 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!s1 && !s2)
		return (1);
	if (i == j)
	{
		i = 0;
		while (i <= j && s1[i] == s2[i])
			i++;
		if (i == j)
			return (1);
	}
	return (0);
}
