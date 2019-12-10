/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:37:19 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 16:34:39 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 == *s2 && *s1 && *s2 && n)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	else if (!n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
