/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 19:49:57 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 22:03:53 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fgr_int(char *fgrl)
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

int		int_check(t_fgr *fgr)
{
	t_fgr	*tmp;
	int		f;

	tmp = fgr;
	while (tmp)
	{
		f = tmp->fgr_int;
		if ((f != 4369) && (f != 15) && (f != 547) && (f != 29)
		&& (f != 785) && (f != 23) && (f != 275) && (f != 71) && (f != 401)
		&& (f != 113) && (f != 51) && (f != 99) && (f != 153) && (f != 57)
		&& (f != 305) && (f != 39) && (f != 281) && (f != 27) && (f != 561))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_fgr	*mega_fgr_val(int fd)
{
	t_fgr	*ok_fgr;
	t_fgr	*tmp;
	char	*line;

	ok_fgr = NULL;
	if (!(ok_fgr = after_line(fd, &line)))
		return (NULL);
	tmp = ok_fgr;
	while (tmp)
	{
		if (!(fgrl_xtra_01((tmp->fgr_line))))
			return (NULL);
		tmp->fgr_int = ft_fgr_int(tmp->fgr_line);
		tmp = tmp->next;
	}
	tmp = ok_fgr;
	if (!(int_check(tmp)))
	{
		free_fgr(ok_fgr);
		free(line);
		return (NULL);
	}
	free(line);
	return (ok_fgr);
}

void	free_fgr(t_fgr *fgr)
{
	t_fgr *tmp;

	if (fgr)
	{
		while (fgr)
		{
			tmp = fgr->next;
			if (fgr->fgr_line)
				free(fgr->fgr_line);
			free(fgr);
			fgr = tmp;
		}
	}
}

char	*fgrl_chck(int i, int gr, char *tfl, char *fgrl)
{
	if (i != 4 && gr != 1)
	{
		free(tfl);
		return (NULL);
	}
	return (fgrl);
}
