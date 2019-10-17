/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 20:59:33 by hfalmer           #+#    #+#             */
/*   Updated: 2019/10/12 13:21:16 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int	parse_flags(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] == '-' && i < 1)
		++i;
	while (str[i])
	{
		if (str[i] == 'l')
			res |= FLG_l;
		else if (str[i] == 'R')
			res |= FLG_R;
		else if (str[i] == 'a')
			res |= FLG_a;
		else if (str[i] == 'r')
			res |= FLG_r;
		else if (str[i] == 't')
			res |= FLG_t;
		else
			return (-i);
		++i;
	}
	return (res);
}

static void	costil_for_norm(int i, int argc, char **argv, int *flags)
{
	*flags |= FLG_mult;
	while (++i <= argc)
	{
		ft_ls(argv[i - 1], *flags);
		i == argc || check_file((char const *)argv[i - 1], *flags) != 0 ?
			0 : print4("\n", "", "", "");
	}
}

static char	flag_reader(int argc, char **argv, int *flags)
{
	int	i;
	int	tmp;

	i = 0;
	*flags = 0;
	while (++i < argc)
	{
		if (argv[i][0] != '-')
			break ;
		tmp = parse_flags(argv[i]);
		if (tmp < 0)
			return (argv[i][-tmp]);
		else
			*flags |= tmp;
	}
	if ((argc - i) == 0)
		ft_ls(".", *flags);
	else if ((argc - i) == 1)
		ft_ls(argv[argc - 1], *flags);
	else
		costil_for_norm(i, argc, argv, flags);
	return (0);
}

int			main(int argc, char **argv)
{
	int		flags;
	char	c;

	flags = 0;
	if (argc > 1)
	{
		c = flag_reader(argc, argv, &flags);
		if (c != 0)
			print4(FT_LS, ILLOPT, &c, USAGE);
	}
	else
		ft_ls(".", 0);
	if (!(flags & FLG_l))
		write(1, "\n", 1);
	return (0);
}
