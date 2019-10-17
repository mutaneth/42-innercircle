/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 08:03:01 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:22:23 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	get_size(t_finf const *f)
{
	if (!f || !(f->stat))
		return (-1);
	return (f->stat->st_size);
}

int	print_size(t_finf const *f)
{
	char	*n;
	int		l;

	l = get_size(f);
	if (l < 0 || !(n = ft_itoa(l)))
		return (-1);
	write(1, n, ft_strlen(n));
	free(n);
	return (0);
}

int	get_size_tabs(t_finf const *f)
{
	char	*n;
	int		l;

	l = get_size(f);
	if (l < 0 || !(n = ft_itoa(l)))
		return (-1);
	l = ft_strlen(n) / 8 + 1;
	free(n);
	return (l);
}
