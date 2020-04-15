/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 01:45:57 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:45:38 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const void	*tmp;

	i = 0;
	tmp = s;
	while (i < (int)n)
	{
		if (((unsigned char*)tmp)[i] == (unsigned char)c)
			return ((void*)&tmp[i]);
		i++;
	}
	return (NULL);
}
