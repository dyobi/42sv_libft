/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 04:07:47 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:47:23 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(tmp, '\0', size + 1);
	return (tmp);
}
