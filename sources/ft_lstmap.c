/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 06:50:50 by kilkim            #+#    #+#             */
/*   Updated: 2020/04/15 07:45:10 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst)
		return (NULL);
	if (!(tmp = ft_lstnew(f(lst->content))))
		return (NULL);
	new = tmp;
	while (lst)
	{
		if (lst->next)
		{
			if (!(tmp->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new);
}
