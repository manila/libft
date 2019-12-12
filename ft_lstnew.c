/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:08:05 by mnila             #+#    #+#             */
/*   Updated: 2019/12/10 23:33:26 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)ft_memalloc(sizeof(t_list));
	if (link == NULL)
		return (NULL);
	if (content_size && content)
	{
		link->content = (void *)ft_memalloc(content_size);
		if (link->content == NULL)
			return (NULL);
		link->content = ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	else
	{
		link->content = NULL;
		link->content_size = 0;
	}
	link->next = NULL;
	return (link);
}
