/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 05:29:13 by hfalmer           #+#    #+#             */
/*   Updated: 2019/02/18 23:29:09 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
int		ft_word_len(char *str, char w)
{
	int	wlen;
	int i;

	i = 0;
	wlen = 0;
	while (str[i] && str[i] != w)
	{
			i++;
			wlen++;
	}
//		printf("	from w_l, len = %d", wlen);
	return (wlen);
}

int     ft_word_count(char *str, char w)
{
	int i;
	int wcount;

	i = 0;
	wcount = 0;
	while (str[i])
	{
		while (str[i] && str[i] == w)
			i++;
		wcount++;
//		printf("from w_c;i = %d, w_l = %d\n", i, ft_word_len(str + i, w));
		i += ft_word_len(str + i, w);
	}
	return (wcount);
}

char	*ft_word_fill(char *str, char w)
{
	char	*res;
	int		wlen;
	int		i;

	i = 0;
	while (str && *str == w)
		str++;
	wlen = ft_word_len(str, w);
	if (!(res = (char*)malloc(sizeof(char) * (wlen + 1))))
		return (NULL);
	while (i < wlen)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
//	printf("return from w_f: %s\n", res);
	return (res);
}

char	**ft_strsplit(char const *str, char w)
{
	char	**res;
	char	*s;
	int		wcount;
	int		i;

	s = (char *)str;
	i = 0;
	wcount = ft_word_count(s, w);
//	printf("w_c(from split): %d\n", wcount);
	if (!(res = (char **)malloc(sizeof(char) * (wcount + 1))))
		return (NULL);
	while (i < wcount)
	{
		if (!(res[i] = ft_word_fill(s, w)))
		{
//			printf("QQQQQQQQQQQQQQQQQQQQQQQQ");
			while (res && *res)
			{
				free(*res);
				res++;
			}
			return (NULL);
		}
//		printf("res[%d] after filled = %s|\n", i, res[i]);
		i++;
//		printf("	from split s before = %s|\n", s);
		s = s + ft_word_len(s, w);
		while (s && *s == w)
			s++;
//		printf("	from split s after = %s|\n", s);
	}
//	printf("res[0] ggggg = %s|\n", res[0]);
//	printf("res[1] ggggg = %s|\n", res[1]);
//	printf("res[2] ggggg = %s|\n", res[2]);
	res[wcount] = NULL;
//	printf("res[0] ggggg = %s|\n", res[0]);
//	printf("res[1] ggggg = %s|\n", res[1]);
//	printf("res[2] ggggg = %s|\n", res[2]);
	return (res);
}

/*int main(int c, char **v)
{
	char **check;
	check = ft_strsplit(v[1], v[2][0]);
	int i = 0;
	printf("%s\n", check[0]);
	printf("%s\n", check[1]);
	//while (check[i] && check[i][0])
//	{
//		printf("%s\n", check[i]);
//		i++;
//	}
	printf("%d", i);
	return (0);
}*/
