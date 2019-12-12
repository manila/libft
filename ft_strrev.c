/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 21:28:52 by mnila             #+#    #+#             */
/*   Updated: 2019/12/11 21:41:02 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *s)
{
	int		end;
	int		start;
	char	tmp;
	char	*revstr;

	start = 0;
	end = ft_strlen(s) - 1;
	revstr = ft_strnew(end + 1);
	ft_strcpy(revstr, s);
	while (end - start != 1 && end - start != 2)
	{
		tmp = revstr[start];
		revstr[start] = revstr[end];
		revstr[end] = tmp;
		start++;
		end--;
	}
	return (revstr);
}
