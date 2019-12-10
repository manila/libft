/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 21:56:26 by mnila             #+#    #+#             */
/*   Updated: 2019/12/03 16:13:21 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	const unsigned char *c_src;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	while (n-- && (c_dest || c_src))
	{
		*c_dest++ = *c_src++;
	}
	return (dest);
}
