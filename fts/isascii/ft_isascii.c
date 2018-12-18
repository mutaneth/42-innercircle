/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 02:11:17 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 02:14:41 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main()
{
	int pep;
	pep = 158;
	printf("isascii: %d\n", isascii(pep));
	printf("ft_isascii: %d\n", ft_isascii(pep));
	return (0);
}
