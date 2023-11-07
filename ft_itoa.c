/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:59:08 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/11 11:06:05 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	else if (n < 10)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = count_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/
