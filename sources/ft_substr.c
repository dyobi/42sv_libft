/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 04:01:27 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:47:41 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (s)
	{
		if (!(tmp = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (len--)
			tmp[i++] = s[start++];
		return (tmp);
	}
	return (0);
}
