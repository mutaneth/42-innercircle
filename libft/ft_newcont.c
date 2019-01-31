/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newcont.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:04:50 by hfalmer           #+#    #+#             */
/*   Updated: 2019/01/08 21:09:07 by hfalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_newcont(void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}
