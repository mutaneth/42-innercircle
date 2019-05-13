/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:56:11 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/02 21:26:48 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_lsti	*fd_find(t_lsti **lst, int fd)
{
	t_lsti	*tmpl;

	tmpl = *lst;
	while (tmpl)
	{
		if (tmpl->index == fd)
			return (tmpl);
		tmpl = tmpl->next;
	}
	tmpl = ft_lstinew(NULL, 0, fd);
	ft_lstiadd(lst, tmpl);
	return (tmpl);
}

static int		gnl(void **str, char **line)
{
	int		i;
	char	*tmps;

	if ((i = ft_strchri(*str, '\n')) < 0)
		return (0);
	if (((*line) = ft_strsub(*str, 0, i - 1)))
	{
		tmps = ft_strsub((const char*)(*str), (unsigned int)i + 1, ft_strlen(*str) - i + 1);
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
		lst = ft_lstinew(buf, BUFF_SIZE + 1, fd);
	tmpl = fd_find(&lst, fd);
	while (113)
	{
		if ((gnli = gnl(&tmpl->content, line)) > 0)
			return (1);
		else if ((rd = read(fd, &buf, BUFF_SIZE)))
		{
			buf[rd] = '\0';
			tmpl->content = ft_strrejoin((char*)tmpl->content, buf);
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
