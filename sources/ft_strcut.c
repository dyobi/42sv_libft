/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:18:25 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/16 18:18:31 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcut(char *s, char c)
{
	char	*res;
	int		len;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			if (!(res = ft_strnew(len + index)))
				return (NULL);
			res = ft_strcpy(res, &(s[index]));
			free(s);
			return (res);
		}
		index++;
	}
	free(s);
	return (ft_strnew(0));
}
