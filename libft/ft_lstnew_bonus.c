/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:36:42 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/11 13:39:41 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	rtn = (t_list *)malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	rtn->next = NULL;
	rtn->content = content;
	return (rtn);
}

/*
#include <stdio.h>

int main()
{
 	char *content = "INTER TEXT HERE\n";
 	t_list *result = ft_lstnew((void *)content);
 	printf("The content is %s", (char *)result->content);
 	return 0;
}*/
