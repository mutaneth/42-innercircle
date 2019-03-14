/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 05:29:13 by hfalmer           #+#    #+#             */
/*   Updated: 2019/03/15 02:33:01 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_len(char const *str, char w)
{
	int	len;
	int i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != w)
		{
			while (str[i] != w && str[i])
			{
				i++;
				len++;
			}
			return (len);
		}
		else
		{
			while (str[i] == w)
				i++;
		}
	}
	return (len);
}

static int		ft_word_count(char const *str, char w)
{
	int i;
	int wcount;

	i = 0;
	wcount = 0;
	while (str[i] != '\0')
	{
		if (str[i] != w)
		{
			wcount++;
			while (str[i] != w && str[i] != '\0')
			{
				i++;
			}
		}
		if (str[i] == '\0')
			break ;
		else
			i++;
	}
	return (wcount);
}

static char		*ft_word_fill(char const *str, char *filled, char w)
{
	int		l;
	int		i;

	i = 0;
	l = 0;
	while (str[i] == w)
		i++;
	while (str[i] && str[i] != w)
	{
		filled[l] = str[i];
		i++;
		l++;
	}
	filled[l] = '\0';
	return (filled);
}

char			**ft_strsplit(char const *s, char w)
{
	char	**res;
	int		len;
	int		i;
	int		wi;

	i = -1;
	wi = 0;
	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (ft_word_count(s, w) + 1))))
		return (NULL);
	while (++i < ft_word_count(s, w))
	{
		while (s[wi] == w)
			wi++;
		len = ft_word_len(&s[wi], w);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!res[i])
			ft_free(&res);
		ft_word_fill(&s[wi], res[i], w);
		wi += len;
	}
	res[i] = NULL;
	return (res);
}
