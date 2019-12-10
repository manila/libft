/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:10:46 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:50:08 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	if (!*s2)
		return ((char *)s1);
	if (!len || !*s1)
		return (NULL);
	if (*s2 == *s1)
		if (ft_strnstr(s1 + 1, s2 + 1, len - 1) == s1 + 1)
			return ((char *)s1);
	return (ft_strnstr(s1 + 1, s2, len - 1));
}
