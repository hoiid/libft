/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:21:09 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/11 15:51:32 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
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
 	ft_lstadd_front (&my_tlist, linked_list_item1);
 	ft_lstadd_front (&my_tlist, linked_list_item2);
 	printf("The result is %s\n", (char *)my_tlist[0].content);
 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
	return 0;
}*/
