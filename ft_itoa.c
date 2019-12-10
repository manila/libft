/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:50:42 by mnila             #+#    #+#             */
/*   Updated: 2019/12/09 23:56:02 by mnila            ###   ########.fr       */
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
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	s[len - 1] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n / 10)
	{
		s[len - 1] = (char)(n % 10 + '0');
		n /= 10;
		len--;
	}
	s[len - 1] = n + '0';
	return (s);
}
