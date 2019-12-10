/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 20:27:57 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:16:58 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ns;
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		ns = ft_strnew(ft_strlen(s));
		if (ns == NULL)
			return (NULL);
		else
		{
			while (s[i])
			{
				ns[i] = f(i, s[i]);
				i++;
			}
			ns[i] = '\0';
			return (ns);
		}
	}
	return (NULL);
}
