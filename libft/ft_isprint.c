/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 02:18:00 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 01:56:55 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
	int pep;
	pep = 133;
	printf("isprint: %d\n", isprint(pep));
	printf("ft_isprint: %d\n", ft_isprint(pep));
	return (0);
}*/
