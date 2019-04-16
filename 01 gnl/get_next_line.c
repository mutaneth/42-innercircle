/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:53:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/16 03:54:32 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		fd_check(t_lsti *lst, int fd)
{
	t_lsti *tmpL;

	tmpL = *lst;
	while (tmp)
	{
		if (fd != tmpL.index)
			tmpL = tmpL->next;
		else
			return (1);
	}
	return (0);
}

static t_lsti	*fd_find(t_lsti *lst)
{
	t_lsti *res;

	res = *lst;
	while(res)
	{
		if (!fd_check(lst))
			res = res->next;
		else
			return (res);
	}
}

static char	*gnl(t_lsti *lst)
{
	*tmpL = *lst;
	if (\n || EOF)
		*tmpS = strrjoin (tmpL.cont till !\n || EOF)
	else
		while (!ft_strchr(tmpL.cont, \n) || !ft_strchr(tmpL, EOF))
			*tmpS = strjoin(tmpL.cont) + free_cont;
			read;
	return tmpS;
}

int	 get_next_line(int const fd, char **line)
{
	static t_lsti	*lst;
//	char			buf[BUFF_SIZE + 1];
	t_lsti			*tmpL;

	if (fd < 0 || read(fd, &buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	(!lst ? lstnew || !fd_check ? lstadd)
		tmpL = *lst;
		*lst->next = lstnew(null, 0, fd);
		*line = gnl(lst(fd_check));
		return (1);
	return (0);
}
