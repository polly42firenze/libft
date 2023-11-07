/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:56:50 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/05/21 14:08:05 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	char	*str_c;

	sign = 1;
	result = 0;
	str_c = (char *)str;
	while ((*str_c && (*str_c >= 9 && *str_c <= 13)) || *str_c == 32)
		str_c++;
	if (*str_c == '-' || *str_c == '+')
	{
		if (*(str_c++) == '-')
			sign = -1;
	}
	while (*str_c >= '0' && *str_c <= '9' && *str_c)
	{
		result = (result * 10) + (*(str_c) - '0');
		str_c++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main ()
{
	char str[] = "-12345689";
	printf ("%d\n", ft_atoi (str));
	return (0);
}*/
