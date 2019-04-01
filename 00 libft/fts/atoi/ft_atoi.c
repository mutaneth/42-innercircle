/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:21:23 by hfalmer           #+#    #+#             */
/*   Updated: 2018/12/18 00:48:23 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	long long	i;
	long long	nb;
	int			k;

	i = 0;
	nb = 0;
	k = 1;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '+' && str[i + 1] <= '9' && str[i + 1] >= '0')
			i++;
		if (str[i] == '-' && str[i++] <= '9' && str[i++] >= '0')
		{
			i++;
			k = -1;
		}
		while (str[i] <= '9' && str[i] >= '0')
			{
				nb = nb * 10 + (str[i] - '0');
				i++;
			}
		break;
	}
	return ((int)(nb * k));
}

int main(int ac, char **av)
{
	printf("ft_atoi: %d\n", ft_atoi(av[1]));
	printf("atoi: %d\n", atoi(av[1]));
	return (0);
}