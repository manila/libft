/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:58:20 by mnila             #+#    #+#             */
/*   Updated: 2019/12/05 13:09:29 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 == *s2 && *s1 && *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
