/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 04:56:51 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:46:25 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

static int	amount(char const *s, char c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			i++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		ylen;
	int		i;
	int		j;
	int		u;
	char	**res;

	ylen = amount(s, c);
	if (!s || !(res = (char**)malloc(sizeof(*res) * (ylen + 1))))
		return (NULL);
	i = -1;
	u = 0;
	while (++i < ylen)
	{
		j = 0;
		if (!(res[i] = ft_strnew(wordlen(&s[u], c) + 1)))
			res[i] = NULL;
		while (s[u] == c)
			u++;
		while (s[u] != c && s[u])
			res[i][j++] = s[u++];
		res[i][j] = '\0';
	}
	res[i] = 0;
	return (res);
}
