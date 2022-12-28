/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:12:52 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/13 14:44:52 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	char	*str;

	str = (char *)s;
	if (!str || !f)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}

/* #include <stdio.h>

void my_func(unsigned int i, char *str)
{
	printf("My inner function: index = %d and the string is %s\n", i, str);
}

int main()
{
 	char str[10] = "Hello.";
 	printf("The result is %s\n", str);
 	ft_striteri(str, my_func);
 	printf("The result is %s\n", str);
 	return 0;
}   */
