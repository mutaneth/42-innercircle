/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 21:12:29 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/16 01:49:07 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	ln1;
	size_t	ln2;

	if (!s1 || !s2)
		return (NULL);
	ln1 = ft_strlen(s1);
	ln2 = ft_strlen(s2);
	i = ln1 + ln2;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (++i < ln1)
		res[i] = s1[i];
	j = -1;
	while (++j < ln2)
		res[i + j] = s2[j];
	res[i + j] = '\0';
	return ((char *)res);
}
