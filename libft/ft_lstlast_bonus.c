/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:42:28 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/11 15:55:44 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*
 #include <stdio.h>

 int main(void)
 {
    t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
 	char content[20] = "CONTENT.";
 	t_list *linked_list_item1 = ft_lstnew((void *)content);
	char content2[20] = "CONTENT2.";
 	t_list *linked_list_item2 = ft_lstnew((void *)content2);
 	ft_lstadd_front (&my_tlist, linked_list_item1);
 	ft_lstadd_front (&my_tlist, linked_list_item2);
    printf("The last item in the list is %s\n", ft_lstlast(my_tlist));
    return (0);
 }*/
