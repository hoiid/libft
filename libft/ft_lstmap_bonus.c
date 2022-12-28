/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:57:27 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/12 15:23:14 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*save;

	if (!lst || !f || !del)
		return (0);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (0);
	save = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (!newlist->next)
		{
			ft_lstclear(&save, del);
			return (0);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (save);
}
