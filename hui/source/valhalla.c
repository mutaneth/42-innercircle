/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valhalla.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:24:23 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/24 22:07:51 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_fgr_line(int fd)
{
	int		i;
	char	*tmp;
	char	*fgrl;
	int		gr;
	char	*tfl;

	i = -1;
	fgrl = ft_strnew(0);
	while (++i < 4 && (gr = get_next_line(fd, &tmp)) == 1)
	{
		if (!tmp)
			return (NULL);
		if (ft_strlen(tmp) == 4)
		{
			tfl = ft_strrejoin(fgrl, tmp, 0);
			fgrl = tfl;
		}
		else
		{
			if (tmp)
				free(tmp);
			return (NULL);
		}
	}
	return (fgrl_chck(i, gr, tfl, fgrl));
}

t_fgr	*fgr_new(char fgr_chr, char *line)
{
	t_fgr	*fgr;

	if (!(fgr = (t_fgr*)malloc(sizeof(t_fgr))))
		return (NULL);
	fgr->fgr_int = -1;
	fgr->fgr_chr = fgr_chr;
	fgr->fgr_line = ft_strdup(line);
	if (!line)
		return (NULL);
	fgr->next = NULL;
	return (fgr);
}

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

t_fgr	*after_line(int fd, char **line)
{
	int		i;
	char	buf[2];
	int		check;
	t_fgr	*fgr;

	fgr = NULL;
	i = 'A' - 1;
	while ((*line = ft_fgr_line(fd)) && ++i < 'Z')
	{
		if (((check = read(fd, buf, 1)) == 1) && (buf[0] != '\n'))
		{
			free(*line);
			return (NULL);
		}
		buf[1] = '\0';
		if (check == 0)
		{
			fgr_push_back(&fgr, *line, (char)i);
			break ;//????????? last fgr
		}
		if (check)
			fgr_push_back(&fgr, *line, (char)i);
		free(*line);
	}
	return (al_chck(line, fgr));
}

t_fgr	*al_chck(char **line, t_fgr *fgr)
{
	if (!(*line))
	{
		free_fgr(fgr);
		free(*line);
	}
	return (fgr);
}

int		fgrl_xtra_01(char *fgr_line)
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
		if (fgr_line[i] != '.' && fgr_line[i] != '#')
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
