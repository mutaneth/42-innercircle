/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 20:56:59 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/17 16:59:47 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <pwd.h>
# include <grp.h>
# include "libft.h"
# include <dirent.h>
# include <stdio.h>
# include <sys/acl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/xattr.h>
# include <time.h>

# define FLG_l			(1 << 0)
# define FLG_R			(1 << 1)
# define FLG_a			(1 << 2)
# define FLG_r		(1 << 3)
# define FLG_t			(1 << 4)

# define FLG_mult		(1 << 12)

# define FT_LS			"./ft_ls: "
# define ILLOPT			"illegal option -- "
# define USAGE			"\nusage: ./ft_ls [-lRart] [file ...]"
# define NOFILE			": No such file or directory"

# define HALF_YEAR		15768000

# define IFRET(x, y)		if(x) return (y)
# define FREE2(x, y)		free(x); free(y)

typedef struct dirent	t_dir;
typedef struct stat		t_stat;
typedef struct winsize	t_win;

typedef struct			s_finfo
{
	char				*name;
	char				*path;
	t_stat				*stat;
	t_dir				*dir;
}						t_finf;

typedef struct			s_tbl
{
	int					owname;
	int					grname;
	int					size;
}						t_tblp;

int						ft_ls(char const *fn, int flags);
int						read_dirs(void);
t_finf					*init_finf(const char *path, const t_dir *dir,
							const int flags);
void					lst_insert_new(char const *fn,
							int const flags, const t_dir *dir, t_list **root);

void					print4(char const *s1, char const *s2,
							char const *s3, char const *s4);

char					*get_data(t_finf const *f);
int						print_data(t_finf const *f);

char					*get_group_name(t_finf const *f);
int						print_group_name(t_finf const *f);

int						get_links_count(t_finf const *f);
int						print_links_count(t_finf const *f);

char					*get_name(t_finf const *f, int flags);
int						print_name(t_finf const *f, int flags);

char					*get_owner_name(t_finf const *f);
int						print_owner_name(t_finf const *f);

int						get_permission(t_finf const *f);
int						print_permission(t_finf const *f);

int						get_size(t_finf const *f);
int						print_size(t_finf const *f);

int						get_type(t_finf const *f);
int						print_type(t_finf const *f);

int						print_table(t_finf const *f, int flags, t_tblp *tbl);
int						print_simple(t_finf const *f, int flags);

void					set_colors(char const *fg, char const *bg);

void					lstdels(t_list **alst, const char *fn);
void					free_tinf(t_finf **alst, const char *fn);

t_finf					*init_finf_dir(const char *path);

int						get_owner_tabs(t_finf const *f);
int						get_group_tabs(t_finf const *f);
int						get_size_tabs(t_finf const *f);
void					fill_tbl(t_list *l, t_tblp *tb);
int						check_print_file(char const *fn, int flags);

void					prepare_helper(t_list *root,
							const char *fn, int flags, int i);
int						count_blocks(t_list *cur, int flags);
int						check_file(const char *fn, int flags);

void					ft_lstinsert(t_list **alst, t_list *node,
							int (*comp)(void *n1, void *n2));

#endif
