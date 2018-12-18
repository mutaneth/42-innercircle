/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:37:10 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 00:55:54 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int pep;
	pep = 0;
	printf("isalpha: %d\n", isalpha(pep));
	printf("ft_isalpha: %d\n", ft_isalpha(pep));
	return (0);
}*/
