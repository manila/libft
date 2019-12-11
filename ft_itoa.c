/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:50:42 by mnila             #+#    #+#             */
/*   Updated: 2019/12/10 19:24:30 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long	nl;
	char	*s;
	int		len;

	nl = (long)n;
	len = ft_intlen(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	s[len--] = '\0';
	if (nl < 0)
	{
		s[0] = '-';
		nl = nl * -1;
	}
	while (nl / 10)
	{
		s[len--] = (char)((nl % 10) + '0');
		nl /= 10;
	}
	s[len] = (char)((nl % 10) + '0');
	return (s);
}
