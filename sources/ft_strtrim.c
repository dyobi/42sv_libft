/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 04:18:07 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:47:37 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	trimset(char const *set, char c)
{
	int		len;

	len = ft_strlen(set);
	while (len--)
	{
		if (c == set[len])
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (trimset(set, s1[i]))
		i++;
	if (i == j)
		return (ft_strdup(""));
	while (trimset(set, s1[j - 1]))
		j--;
	if (!(res = ft_strnew(j - i)))
		return (NULL);
	ft_strncpy(res, s1 + i, j - i);
	return (res);
}
