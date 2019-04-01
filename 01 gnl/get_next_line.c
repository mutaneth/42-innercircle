/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:53:18 by hfalmer           #+#    #+#             */
/*   Updated: 2019/04/01 21:27:53 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int	 get_next_line(int const fd, char **line)
{
	int		ret;
	lsti
	tmp
	char	buf[BUFF_SIZE + 1];

	if (fd < 0 || read(fd, &buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	read(fd, &buf, BUFF_SIZE);
	if (!lsti->content)


}
