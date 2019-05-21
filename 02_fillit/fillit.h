/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 03:02:14 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/17 20:00:43 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "gnl/get_next_line.h"

typedef struct		s_fgr
{
	int				fgr_int;
	char			fgr_chr;
	char			fgr_x;
	char			fgr_y;
	struct s_fgr	*next;
}					t_fgr;

#endif
