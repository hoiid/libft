/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:42:14 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/11 15:50:41 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst)
	{
		t = ft_lstlast(*lst);
		t->next = &*new;
	}
	else
		*lst = new;
}

/*
#include <stdio.h>

int main()
{
 	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
 	char content[20] = "CONTENT.";
 	t_list *linked_list_item1 = ft_lstnew((void *)content);
	char content2[20] = "CONTENT2.";
 	t_list *linked_list_item2 = ft_lstnew((void *)content2);
 	ft_lstadd_back (&my_tlist, linked_list_item1);
 	ft_lstadd_back (&my_tlist, linked_list_item2);
 	printf("The result is %s\n", (char *)my_tlist[0].content);
 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
	return 0;
}*/
