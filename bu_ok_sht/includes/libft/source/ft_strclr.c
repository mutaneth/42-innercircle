/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 01:32:36 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/31 23:37:57 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	size_t	l;

	if (!s)
		return ;
	i = 0;
	l = ft_strlen(s);
	while (i < l)
	{
		s[i] = '\0';
		i++;
	}
}
