/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 01:57:43 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/19 01:56:32 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int pep;
	pep = 58;
	printf("isdigit: %d\n", isdigit(pep));
	printf("ft_isdigit: %d\n", ft_isdigit(pep));
	return (0);
}*/
