/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 02:48:14 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:43:42 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (!(res = (void *)malloc(size * count)))
		return (NULL);
	ft_bzero(res, (count * size));
	return (res);
}
