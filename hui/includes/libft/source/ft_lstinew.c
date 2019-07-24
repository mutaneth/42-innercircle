/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 20:19:28 by hfalmer           #+#    #+#             */
/*   Updated: 2019/05/13 19:45:30 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lsti	*ft_lstinew(void *cont, size_t cont_size, int index)
{
	t_lsti	*nlst;

	if (!(nlst = (t_lsti*)malloc(sizeof(t_lsti))))
		return (NULL);
	if (!cont)
	{
		nlst->content = ft_memalloc(1);
		nlst->content_size = 0;
	}
	else
	{
		if (!(nlst->content = ft_memalloc(cont_size)))
		{
			free(nlst);
			return (NULL);
		}
		nlst->content = ft_memcpy(nlst->content, cont, cont_size);
		nlst->content_size = cont_size;
	}
	nlst->next = NULL;
	nlst->index = index;
	return (nlst);
}
