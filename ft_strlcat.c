/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:24:15 by mnila             #+#    #+#             */
/*   Updated: 2019/12/09 23:58:12 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t dstsize)
{
    size_t  totalsize;
    size_t  ogdstsize;
	
	totalsize = ft_strlen(dst) + ft_strlen(src);
	while (*dst && dstsize)
	{
	   dst++;
	   dstsize--;
	}
	if (dstsize == 0)
	{
	   return (ogdstsize + ft_strlen(src));
	}
	while (*src && dstsize)
	{
	   *dst++ = *src++;
	   dstsize--;
	}
	*dst = 0;
	return (totalsize);
}
