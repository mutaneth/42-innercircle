/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 07:57:12 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:18:50 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*get_group_name(t_finf const *f)
{
	struct group	*gr;

	if (!f || !(f->stat))
		return (NULL);
	gr = getgrgid(f->stat->st_gid);
	if (!gr)
		return (NULL);
	return (gr->gr_name);
}

int		print_group_name(t_finf const *f)
{
	char	*name;

	if (!(name = get_group_name(f)))
		return (-1);
	write(1, name, ft_strlen(name));
	return (0);
}

int		get_group_tabs(t_finf const *f)
{
	char	*name;

	if (!(name = get_group_name(f)))
		return (-1);
	return (ft_strlen(name) / 8 + 1);
}
