/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 02:55:42 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 03:02:05 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

int main()
{
	int pep;
	pep = 112;
	printf("tolower: %d\n", tolower(pep));
	printf("ft_tolower: %d\n", tolower(pep));
	return (0);
}
