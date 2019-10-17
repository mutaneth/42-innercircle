/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 07:42:15 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:20:06 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	get_links_count(t_finf const *f)
{
	if (!f || !(f->stat))
		return (-1);
	return (f->stat->st_nlink);
}

int	print_links_count(t_finf const *f)
{
	char	*n;
	int		l;

	l = get_links_count(f);
	n = ft_itoa(l);
	if (l < 0 || !n)
		return (-1);
	write(1, n, ft_strlen(n));
	free(n);
	return (0);
}
