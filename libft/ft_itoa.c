/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasor <mnasor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:23:25 by mnasor            #+#    #+#             */
/*   Updated: 2022/12/13 14:26:07 by mnasor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

static void	ft_revstr(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ret;
	int		negative;

	len = 0;
	negative = (n < 0);
	ret = ft_calloc(12, sizeof(*ret));
	if (!ret)
		return (NULL);
	if (n == 0)
		ret[0] = '0';
	while (n != 0)
	{
		ret[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (negative)
		ret[len] = '-';
	ft_revstr(ret);
	return (ret);
}

/* #include <stdio.h>

int main(void)
{
	int n;
	
	n =-2147483648;
	printf("%s\n", ft_itoa(n));
} */