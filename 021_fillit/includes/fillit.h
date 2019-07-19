/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 03:02:14 by hfalmer           #+#    #+#             */
/*   Updated: 2019/07/19 06:14:34 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# include <fcntl.h>
# include <stdio.h>/////
# include "./libft/includes/libft.h"
# include <math.h>//////

typedef struct		s_fgr
{
	int				fgr_int;
	char			fgr_chr;
	char			*fgr_line;
	struct s_fgr	*next;
}					t_fgr;

# define FGR1 0000 0000

int					six(char **map, t_fgr *fgr, int y, int x);
void				print_map(char **map);
void				dot(char **map, t_fgr *fi);
int					place(char **map, t_fgr *fgr, int y, int x);
int					putin(char **map, t_fgr *fgr, int y, int x);
int					twenty_one(char **map, t_fgr *fgr, int y, int x);
int					rcrs(char ***minmap, t_fgr *fgrlst);

char				*ft_fgr_line(int fd);
t_fgr				*fgr_new(char fgr_chr, char *line);
void				fgr_push_back(t_fgr **begin_list, char *data, char i);
t_fgr				*after_line(int fd);
int					check_n(int fd);
int					fgrl_xtra_01(char *fgr_line);
int					ft_fgr_int(char *fgrl);
int					int_check(t_fgr *fgr);
t_fgr				*mega_fgr_val(int fd);
void				free_fgr(t_fgr **fgr);

// int					ft_sqrt
int					fgr_count(t_fgr *fgrlist);
char				**mapc(int flg);
void				map_free(char **map, int fgc);// huita
// char				**map_increaser(t_fgr *fgrlst, char **map, int flg);
// int					check_n(int fd);
// int					place(char **map, t_fgr *fgr, int y, int x);
// int					four_check(char **map, t_fgr *fgr, int x, int y, int s);
// int					check_input_count(char *blc);
int					rcrs(char ***minmap, t_fgr *fgrlst);
// void				free_fgr(t_fgr **fgr);
// void				print_map(char **map);

int					read_max(int fd);
int					st(char **av);
void				build_f(t_fgr *r);

#endif
