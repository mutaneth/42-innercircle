/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 03:02:14 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/28 19:32:40 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include <fcntl.h>
# include "./libft.h"

typedef struct		s_fgr
{
	int				fgr_int;
	char			fgr_chr;
	char			*fgr_line;
	struct s_fgr	*next;
}					t_fgr;

/*
** VALIDATE **
*/

int					ft_fgr_int(char *fgrl);
int					int_check(t_fgr *fgr);
t_fgr				*mega_fgr_val(int fd);
void				free_fgr(t_fgr *fgr);
char				*fgrl_chck(int i, int gr, char *tfl, char *fgrl);

/*
** VALHALLA **
*/

char				*ft_fgr_line(int fd);
t_fgr				*fgr_new(char fgr_chr, char *line);
void				fgr_push_back(t_fgr **begin_list, char *data, char i);
t_fgr				*after_line(int fd, char **line);
int					fgrl_xtra_01(char *fgr_line);

/*
** PUT_IN **
*/

int					rcrs(char ***minmap, t_fgr *fgrlst, int y, int xt);
int					twenty_one(char **map, t_fgr *fgr, int y, int x);
int					siz_p(char **map, int y, int x, t_fgr *fgr);
int					six(char **map, t_fgr *fgr, int y, int x);
int					putin(char **map, t_fgr *fgr, int y, int x);

/*
** PUTIN_CLONE **
*/

void				print_map(char **map);
void				dot(char **map, t_fgr *fi);
int					place(char **map, t_fgr *fgr, int y, int x);
t_fgr				*al_chck(char **line, t_fgr *fgr);

/*
** MAP_CREATOR **
*/

int					ft_sqrt(int nb);
int					fgr_count(t_fgr *fgrlst);
char				**mapc(int flg);
void				map_free(char **map, int fgc);

/*
** MAIN **
*/

int					read_max(int fd);
int					check_n(int fd);
int					st(char **av);
void				build_f(t_fgr *r);

#endif
