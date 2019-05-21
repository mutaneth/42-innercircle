/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fgr_val_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 19:49:57 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/18 22:59:59 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fgr	*fgr_new(int fgr_int, char fgr_chr)/* creates new node in t_fgr. chr starts with 41 and then iterates to 26 times*/
{
	t_fgr	*fgr;

	fgr = (t_fgr*)malloc(sizeof(t_fgr));
	fgr->fgr_int = fgr_int;
	fgr->fgr_chr = fgr_chr;
	fgr->fgr_x = -1;
	fgr->fgr_y = -1;
	fgr->next = NULL;
	return (fgr);
}

char	*fgr_line(int fd)/* creates one line of [16] from file*/
{
	char	**tmps;
	char	**fgrl;
	int		i;
	int		len;

	i = -1;
	while (++i < 4 && get_next_line(fd, tmps) == 1)
	{
		len = ft_strlen(tmps);
		if (len == 4)
		{
			fgrl = ft_strrejoin(&tmps, &fgrl, -1);
		}
		else
		{
			if (tmps)
				free(tmps);
			return (NULL);
		}
	}
	return (fgrl);
}

int		fgrl_val(char *fgrl)/* checks if this line is valid. if it's not, just frees*/
{
	int i;

	i = ft_strlen(fgrl) + 1;
	while (--i)
	{
		if (fgrl[i] != '.' || fgrl[i] != '#')
		{
			free(fgrl);
			return (0);
		}
		if (fgrl[i] == '.')
			fgrl[i] = '0';
		else
			fgrl[i] = '1';
	}
	return (1);
}

int		fgr_int(char *fgrl)/* takes fgrl and turns it to int using bits logic after fgrl_val*/
{
	int	fgr_int;
	int	frst;
	int	i;

	fgr_int = 0;
	frst = -1;
	i = -1;
	while (++i < 16)
	{
		if (frst == -1)
			if (fgrl[i] == 1)
				frst = i;
			if (frst != -1)
				fgr_int |= (fgrl[i] - '0') << (i - frst);
	}
	return (fgr_int);
}
