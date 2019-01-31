/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 20:19:28 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/28 23:38:18 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlst;
	void	*ncont;
	size_t	nsize;

	if (!(nlst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		ncont = ft_memalloc(content_size);
		nsize = content_size;
	}
	return (NULL);
}
