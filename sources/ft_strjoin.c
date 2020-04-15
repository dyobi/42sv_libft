/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 04:11:28 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:46:51 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		if (!(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		while (*s1)
		{
			res[i++] = *s1;
			s1++;
		}
		while (*s2)
		{
			res[i++] = *s2;
			s2++;
		}
		return (res);
	}
	return (NULL);
}
