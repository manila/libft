/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 23:26:33 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:20:40 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	i = 0;
	ns = ft_strnew(len);
	if (s == NULL || ns == NULL)
		return (NULL);
	while (i < len)
	{
		ns[i] = s[start + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
