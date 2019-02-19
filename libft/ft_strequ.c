/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:09:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/19 03:47:40 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	char *s1;
	char *s2;

	s1 = (char*)str1;
	s2 = (char*)str2;
	if (!s1 || !s2)
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (ft_strlen((const char*)s1) != ft_strlen((const char*)s2))
		return (0);
	while (*s1 && *s2)
	{
		if (s1 != s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
/* 
 #include <stdio.h>
int main(int c, char **v)
{
	printf("%d", ft_strequ(v[1], v[2]));
}*/
