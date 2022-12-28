/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:06:08 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/09 19:03:31 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str)
	{
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
		if ((char)c == 0)
			return (str);
	}
	return (0);
}

/*
#include <stdio.h>

int main () {
   const char str[] = "tripouille"; 
   const char ch = 'u'; 
   char *p;
   p = ft_strchr(str, 'r');
   printf("String starting from %c is: %s", ch, p);
   return 0;
}
*/