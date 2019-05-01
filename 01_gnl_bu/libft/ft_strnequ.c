/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:09:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/16 01:53:30 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	if ((s1 == '\0' && s2 == '\0') || !n)
		return (1);
	if (s1 && s2)
	{
		while (i != n || j != n)
		{
			if (s1[i] != s2[j])
				return (0);
			i++;
			j++;
		}
		return (1);
	}
	return (0);
}
