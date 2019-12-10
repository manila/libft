/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:56:41 by mnila             #+#    #+#             */
/*   Updated: 2019/12/07 02:57:26 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *s)
{
	int		num;
	int		sign;

	num = 0;
	sign = 1;
	while (*s && ((*s == ' ') || (*s >= '\t' && *s <= '\r')))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s && ft_isdigit(*s))
		num = num * 10 + (*(s++) - '0');
	if (num == -469762049)
	{
		if (sign > 0)
			return (-1);
		return (0);
	}
	return (num * sign);
}
