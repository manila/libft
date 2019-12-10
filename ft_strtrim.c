/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 00:06:08 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 21:54:07 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*ts;
	size_t	i;
	size_t	len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] && i < len)
		i++;
	if (i >= len)
		return (ft_strnew(0));
	while ((s[len - 1] == ' ' ||
			s[len - 1] == '\n' ||
			s[len - 1] == '\t') &&
			len - 1)
		len--;
	ts = ft_strsub(s, i, len - i);
	if (ts == NULL)
		return (NULL);
	return (ts);
}
