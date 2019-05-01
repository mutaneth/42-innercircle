/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 00:34:55 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 03:53:09 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char *tmps;

	tmps = ((char*)ft_strjoin((const char*)s1, (const char*)s2));
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (tmps);
}
