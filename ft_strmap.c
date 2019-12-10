/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:10:39 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:18:26 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*ns;
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		ns = ft_strnew(ft_strlen(s));
		if (ns == NULL)
		{
			return (NULL);
		}
		while (s[i])
		{
			ns[i] = f(s[i]);
			i++;
		}
		ns[i] = '\0';
		return (ns);
	}
	return (NULL);
}
