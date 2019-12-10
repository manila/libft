/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:50:42 by mnila             #+#    #+#             */
/*   Updated: 2019/12/10 15:40:49 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	if (n < 0)
		return (2 + ft_intlen(-(n / 10)));
	else if (n / 10)
		return (1 + ft_intlen(n / 10));
	else
		return (1);
}

char		*ft_itoa(int n)
{
	long	nl;
	int		len;
	char	*str;

	nl = (long)n;
	len = ft_intlen(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (nl == 0)
		str[0] = '0';
	str[len] = '\0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = -nl;
	}
	while (len >= 0 && nl)
	{
		str[len-- - 1] = (char)((nl % 10) + '0');
		nl /= 10;
	}
	return (str);
}
