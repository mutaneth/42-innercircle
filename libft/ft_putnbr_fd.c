/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 17:33:38 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/27 19:04:36 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int    i;
	int    j;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	j = n;
	while (j > 10)
	{
		j = j / 10;
		i = i * 10;
	}
	while (i > 1)
	{
		ft_putchar_fd((n - n % i) / i + '0', fd);
		n = n % i;
		i = i / 10;
	}
	ft_putchar_fd(n + '0', fd);
}
