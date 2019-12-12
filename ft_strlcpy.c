/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:56:14 by mnila             #+#    #+#             */
/*   Updated: 2019/12/11 21:42:11 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cpysize;
	size_t	ogdsize;

	cpysize = 0;
	ogdsize = dstsize;
	while (dstsize && *dst)
	{
		*dst++ = *src++;
		cpysize++;
		dstsize--;
	}
	if (*src == '\0' && *dst == '\0')
		*dst = '\0';
	if (dstsize == 0)
	{
		if (ogdsize != 0)
			*dst = 0;
		while (*src)
		{
			src++;
			cpysize++;
		}
	}
	return (cpysize);
}
