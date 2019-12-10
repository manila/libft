/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnila <mnila@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:30:31 by mnila             #+#    #+#             */
/*   Updated: 2019/12/06 22:58:03 by mnila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_count(const char *s, char c)
{
	int		i;
	int		len;
	int		count;

	if (s == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s);
	count = 0;
	while (s[len - 1] == c)
		len--;
	while (i < len)
	{
		while (s[i] == c && i < len)
			i++;
		while (s[i] != c && i < len)
			i++;
		count++;
	}
	return (count);
}

static char	**ft_split_words(char **sa, char const *s, char c, int len)
{
	int		i;
	int		n;
	int		sc;

	i = 0;
	n = 0;
	sc = 0;
	while (i < len)
	{
		while (s[i] == c && i < len)
			i++;
		while (s[i + n] != c && i + n < len)
			n++;
		sa[sc++] = ft_strsub(s, i, n);
		i += n;
		n = 0;
	}
	sa[sc] = NULL;
	return (sa);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		sc;
	int		len;
	char	**sa;

	i = 0;
	n = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == c)
		len--;
	sc = 0;
	sa = (char **)malloc(sizeof(char *) * ft_split_count(s, c) + 1);
	if (sa == NULL)
		return (NULL);
	sa = ft_split_words(sa, s, c, len);
	return (sa);
}
