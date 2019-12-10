/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 23:42:44 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 15:14:14 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ns;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (ns == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		ns[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
