/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:08:03 by mnila             #+#    #+#             */
/*   Updated: 2019/12/11 21:39:45 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstrev(t_list **head)
{
	t_list *new;

	if (head && head->next)
	{
		new = ft_lstrev(head->next);
		head->next->next = head;
		head->next = NULL;
		return (new);
	}
	return (head);
}
