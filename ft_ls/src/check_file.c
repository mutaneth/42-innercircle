/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 11:55:30 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:15:11 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	check_file(const char *fn, int flags)
{
	t_stat	stat;

	if (lstat(fn, &stat) < 0)
		return (-1);
	if (S_ISDIR(stat.st_mode))
		return (0);
	if (S_ISLNK(stat.st_mode) && !(flags & FLG_l))
		return (0);
	return (1);
}

int	check_print_file(const char *fn, int flags)
{
	t_stat	stat;
	t_finf	inf;
	t_tblp	t;

	if (lstat(fn, &stat) < 0)
	{
		print4(FT_LS, fn, NOFILE, "\n");
		return (1);
	}
	inf.stat = &stat;
	inf.name = (char *)fn;
	inf.path = (char *)fn;
	inf.dir = NULL;
	t.grname = get_group_tabs((const t_finf *)&inf);
	t.owname = get_owner_tabs((const t_finf *)&inf);
	t.size = get_size_tabs((const t_finf *)&inf);
	if (S_ISDIR(stat.st_mode))
		return (0);
	if (S_ISLNK(stat.st_mode) && !(flags & FLG_l))
		return (0);
	if (!(flags & FLG_l))
		print4(fn, "\t", "", "");
	else
		print_table((const t_finf *)&inf, flags, &t);
	return (1);
}
