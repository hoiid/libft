/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:52:03 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/11 16:13:45 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>


char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
}
int main()
{
 	char str[10] = "hello.";
	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
 	return 0;
}
*/
