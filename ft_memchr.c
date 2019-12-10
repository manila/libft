/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:07:47 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:06:01 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_s;
	unsigned char	c_c;

	i = 0;
	c_s = (unsigned char *)s;
	c_c = (unsigned char)c;
	while (i < n)
	{
		if (c_s[i] == c_c)
		{
			return (&c_s[i]);
		}
		i++;
	}
	return (NULL);
}
