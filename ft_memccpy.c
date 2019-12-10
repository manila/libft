/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:31:12 by mnila             #+#    #+#             */
/*   Updated: 2019/12/05 12:17:09 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		c_c;
	unsigned char		*c_dst;
	unsigned char		*c_src;

	i = 0;
	c_c = (unsigned char)c;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	while (i < n)
	{
		c_dst[i] = (unsigned char)c_src[i];
		if (c_dst[i] == c_c)
			return (&c_dst[i + 1]);
		i++;
	}
	return (NULL);
}
