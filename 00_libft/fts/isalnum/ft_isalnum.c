/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 02:05:55 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 02:10:17 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main()
{
	int pep;
	pep = 123;
	printf("isalnum: %d\n", isalnum(pep));
	printf("ft_isalnum: %d\n", ft_isalnum(pep));
	return (0);
}
