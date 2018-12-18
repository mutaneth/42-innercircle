/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:28:36 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/12 21:40:35 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i+j] = s2[j];
		j++;
	}
	s1[i+j] = '\0';
	return (s1);
}

int	main(int ac, char **ag)
{
//	char *t1[10];
//	char *t2[10];
//	t1 = strncat(ag[2], ag[1]);
//	t2 = ft_strncat(ag[2], ag[1]);
//	strncat(ag[2], ag[1], 2);
	ft_strncat(ag[2], ag[1], 2);
	printf("%s\n", ag[2]);
//	printf("ft_strncat: %s\n", t2);
	return (0);
}
