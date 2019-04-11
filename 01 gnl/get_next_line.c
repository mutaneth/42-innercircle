/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:53:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/12 00:02:22 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	fd_check(t_lsti lst, int fd)
{
	t_lsti *tmp;

	tmp = *lst;
	while (tmp)
	{
		if (fd != tmp->index)
			tmp = tmp->next;
		else
			return (1);
	}
	return (0);
}



int	 get_next_line(int const fd, char **line)
{
	static t_lsti	*lst;
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || read(fd, &buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (!lst)
		*lst = lstnew(null, 0, fd);
	while
	{
		if (!fd_check(lst, fd))
			// check memjoin/memset
		else
			ft_lstiadd // new lst fd
		// check content \n EOF
	}

}
