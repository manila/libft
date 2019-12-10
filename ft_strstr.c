/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:20:17 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 14:32:34 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	if (*needle == *haystack)
		if (ft_strstr(haystack + 1, needle + 1) == haystack + 1)
			return ((char *)haystack);
	return (ft_strstr(haystack + 1, needle));
}
