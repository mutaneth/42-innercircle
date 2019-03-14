/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:09:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/03/15 00:33:28 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	if (!str1 || !str2)
		return (0);
	if (!str1[0] && !str2[0])
		return (1);
	if (!ft_strcmp(str1, str2))
		return (1);
	return (0);
}
