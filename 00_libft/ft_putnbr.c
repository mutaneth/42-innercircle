/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 03:05:15 by hfalmer           #+#    #+#             */
/*   Updated: 2019/03/15 00:32:39 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	i;
	int	j;

	if (n == -2147483648 && write(1, "-2147483648", 11))
		return ;
	i = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	j = n;
	while (j > 9)
	{
		j = j / 10;
		i = i * 10;
	}
	while (i > 1)
	{
		ft_putchar((n - n % i) / i + '0');
		n = n % i;
		i = i / 10;
	}
	ft_putchar(n + '0');
}
