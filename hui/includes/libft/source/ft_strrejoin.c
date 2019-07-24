/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrejoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 00:34:55 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/21 02:19:36 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrejoin(char *s1, char *s2, int flg)
{
	char *tmps;

	tmps = ((char*)ft_strjoin((const char*)s1, (const char*)s2));
	if (flg < 0)
		free(s1);
	if (flg == 0)
	{
		free(s1);
		free(s2);
	}
	if (flg > 0)
		free(s2);
	return (tmps);
}
