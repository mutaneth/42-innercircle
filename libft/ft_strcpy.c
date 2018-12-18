/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 20:05:52 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 02:01:21 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int	main(void)
{
	const char	sr[4] = "abc";
	char		ds[2] = "1";

//	sr = strdup("abc");
//	ds = strdup("11");
	char *str = ft_strcpy(ds, sr);
	printf("%zu\n", strlen(str));
	printf("%s\n", str);
//	printf("%zu\n", 
	return (0);
}*/
