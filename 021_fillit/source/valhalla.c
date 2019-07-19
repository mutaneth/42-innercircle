/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valhalla.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 06:29:03 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/19 06:49:17 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fgr_push_back(t_fgr **begin_list, char *data, char i)
{
	t_fgr	*tmp;

	if (!(*begin_list))
	{
		*begin_list = fgr_new(i, data);
		return ;
	}
	tmp = *begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = fgr_new(i, data);
}

t_fgr	*after_line(int fd)/* just check \n and \0 yuhoo and fill the fgr*/
{
	char	*line;
	int		i;
	char	buf[2];
	int		check;
	t_fgr	*fgr;

	fgr = NULL;
	i = 'A' - 1;
	while ((line = ft_fgr_line(fd)) && ++i < 'Z')
	{
		if (((check = read(fd, buf, 1)) == 1))
			if (buf[0] != '\n')
			{
				return (NULL);// free
			}
		buf[1] = '\0';
		if (check == 0)
		{
			fgr_push_back(&fgr, line, (char)i);
			break ;
		}
		if (check)
			fgr_push_back(&fgr, line, (char)i);
	}
	if (!line)
		free_fgr(&fgr);
	return (fgr);
}

int		check_n(int fd)
{
	char	buf[22];
	int		ret;

	while ((ret = read(fd, buf, 21)) == 21)
	{
		buf[21] = '\0';
		if (buf[20] && buf[20] != '\n')
			return (0);/* no \n */
	}
	if (ret == 20)
		return (1);
	else
		return (0);/* bad fgr */
}

int		fgrl_xtra_01(char *fgr_line)
/* checks if this line is valid and change symbols to 1 or 0. if it's not val, just frees*/
{
	int	i;
	int	l;
	int b;

	l = ft_strlen(fgr_line);
	if (l != 16)
		return (0);
	i = -1;
	b = 0;
	while (++i < l)
	{
		if (fgr_line[i] != '.' && fgr_line[i] != '#')//free(fgr_l);
			return (0);
		if (fgr_line[i] == '.')
			fgr_line[i] = '0';
		else
		{
			fgr_line[i] = '1';
		}
	}
	return (1);
}

int		ft_fgr_int(char *fgrl)/* takes fgrl and turns it to int using bits logic after fgrl_val*/
{
	int	fgr_int;
	int	frst;
	int	i;

	fgr_int = 0;
	frst = -1;
	i = -1;
	while (++i < 16)
	{
		if (frst == -1 && fgrl[i] - '0' == 1)
			frst = i;
		if (frst != -1)
			fgr_int |= (fgrl[i] - '0') << (i - frst);
	}
	return (fgr_int);
}
