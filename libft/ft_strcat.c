/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:53:45 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 02:00:31 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i+j] = s2[j];
		j++;
	}
	s1[i+j] = '\0';
	return (s1);
}

/*int	main(int ac, char **ag)
{
//	strcat(ag[2], ag[1]);
	ft_strcat(ag[2], ag[1]);
	printf("%s\n", ag[2]);
	return (0);
}*/
