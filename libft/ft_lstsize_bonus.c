/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:41:42 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/13 14:40:03 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int main()
{
 	char *content = "INTER TEXT HERE\n";
  	t_list *result = ft_lstnew((void *)content);
    int test = ft_lstsize(result);
 	printf("The size if the list is %d\n", test);
 	return 0;
} */
