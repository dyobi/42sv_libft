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
	unsigned int	len_s;
	unsigned int	i;

	if (s)
	{
		len_s = ft_strlen(s);
		len = (len_s - start < len) ? len_s - start : len;
		if (len_s < start)
			return (ft_strdup(""));
		else if (!(tmp = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (i < len)
			tmp[i++] = s[start++];
		return (tmp);
	}
	return (NULL);
}
