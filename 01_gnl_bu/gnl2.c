/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:10:27 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/29 22:58:54 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		fd_check(t_lsti *lst, int fd)
{
	t_lsti *tmpL;

	tmpL = lst;
	while (tmpL)
	{
		if (fd != tmpL->index)
			tmpL = tmpL->next;
		else
			return (1);
	}
	return (0);
}

static t_lsti	*fd_find(t_lsti *lst, int fd)
{
	t_lsti *res;

	res = lst;
	while(res)
	{
		if (!fd_check(lst, fd))
			res = res->next;
		else
			return (res);
	}
}

static void		*eat_start(void *str, )
{
	void	*res;
	size_t	i;

	i = 0;
	while ((char*)str++ != "\n" || (char*)str++ != EOF)
		i++;
	res = ft_memalloc(i);

	return(ft_memccpy(res, str, ));
}

gnl
{
	size_t	i;
	char	*tmpS;

	if (i = ft_strchri(lst->content, 10))
	{
		tmpS = ft_strsub((const char*)lst->content, lst->content, i);
		ft_memswap(&line, tmpS, ft_strlen(tmpS));
		ft_strdel(*tmpS);
		//
		tmpS = ft_strsub((const char)str, 0, i);
		ft_memswap(&line, ft_strsub((const char)str, 0, i), ft_strlen(tmpS));
		ft_strdel(*tmpS);
	}
}

 int	get_next_line(int const fd, char **line)
 {
	static	t_lsti	*lst;
	char	buf[BUFF_SIZE];
	t_lsti	*tmpL;
	int		r;

	if (fd < 0 || read(fd, &buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	tmpL = lst;
	if (!lst && (r = read(fd, &buf, BUFF_SIZE)))
		ft_lstinew(buf, BUFF_SIZE, fd);
	if (!fd_check(lst, fd) && (r = read(fd, &buf, BUFF_SIZE)))
		ft_lstiadd(&lst, ft_lstinew(buf, BUFF_SIZE, fd));
	tmpL = fd_find(lst, fd);
	if ((ft_memchr(tmpL->content, 10, BUFF_SIZE)) || (ft_memchr(tmpL->content, -1, BUFF_SIZE)))
		{
			ft_memcpy((void **)line, tmpL->content, BUFF_SIZE)
			eat_start
		}
 }
