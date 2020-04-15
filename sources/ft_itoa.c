/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 05:00:53 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:44:42 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		len(int n)
{
	int		len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;

	i = len(n);
	if (!(res = ft_strnew((size_t)i)))
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	i -= 1;
	while (n >= 10)
	{
		res[i--] = (char)(n % 10 + '0');
		n /= 10;
	}
	res[i] = (char)(n + '0');
	return (res);
}
