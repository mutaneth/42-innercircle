/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:56:11 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/30 03:50:07 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		fd_check(t_lsti *lst, int fd)
{
	t_lsti *tmpl;

	tmpl = lst;
	while (tmpl)
	{
		if (fd != tmpl->index)
			tmpl = tmpl->next;
		else
			return (1);
	}
	return (0);
//	return -1 in main gnl first IF
}

static t_lsti	*fd_find(t_lsti *lst, int fd)
{
	t_lsti *res;

	res = lst;
	while (res)
	{
		if (!fd_check(lst, fd))
			res = res->next;
		else
			return (res);
	}
	return (NULL); //fkn gcc
}

static int		gnl(void **str, char **line)
{
	size_t	i;
	char	*tmps;

	if (!(i = ft_strchri(*str, 10)))
		return (0);
	if ((*line = ft_strsub(*str, 0, i)))
	{
		tmps = ft_strsub((const char*)str, i + 1, ft_strlen(*str) - (i + 1));
		ft_memdel(str);
		*str = tmps;
		return (1);
	}
	return (-1);
}

int				get_next_line(int const fd, char **line)
{
	static t_lsti	*lst;
	char			buf[BUFF_SIZE + 1];
	t_lsti			*tmpl;
	size_t			rd;
	int				gnli;

	if (fd < 0 || read(fd, &buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (!lst && (read(fd, &buf, BUFF_SIZE)))
		ft_lstinew(buf, BUFF_SIZE + 1, fd);
	if (!fd_check(lst, fd) && (read(fd, &buf, BUFF_SIZE)))
		ft_lstiadd(&lst, ft_lstinew(buf, BUFF_SIZE + 1, fd));
	tmpl = fd_find(lst, fd);
	while (113)
	{
		if ((gnli = gnl(&tmpl->content, line)))
			return (1);
		else if ((rd = read(fd, &buf, BUFF_SIZE)))
		{
			buf[rd] = '\0';
			tmpl->content = ft_strjoinfree((char*)tmpl->content, buf);
		}
		else if (tmpl->content && *(char*)tmpl->content)
		{
			*line = ft_strdup((char*)tmpl->content);
			ft_memdel(&tmpl->content);
			return (1);
		}
		else
			return (0);
	}
}
