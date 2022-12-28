/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:41:23 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/12 18:16:08 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*str;

	counter = 0;
	str = (char *)b;
	if (len == 0)
		return (str);
	while (counter < len)
	{
		str[counter] = (char)c;
		counter++;
	}
	return (b);
}
