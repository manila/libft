/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:50:42 by mnila             #+#    #+#             */
/*   Updated: 2019/12/10 14:25:38 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	if (n / 10)
	{
		if (n < 0)
			return (2 + ft_intlen(-n / 10));
		else
			return (1 + ft_intlen(n / 10));
	}
	return (1);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			return(ft_strncpy(str, "-2147483648", len));
		}
		str[0] = '-';
		n = -n;
	}
	while (n / 10)
	{
		str[len-- - 1]  = (char)((n % 10) + '0');
		n /= 10;
	}
	str[len - 1] = (char)(n + '0');
	return (str);
}
