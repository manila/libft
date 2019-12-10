/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:52:11 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:08:53 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	else if (!*s)
	{
		return (NULL);
	}
	return (ft_strchr(++s, c));
}
