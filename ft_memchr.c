/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:20:59 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:21:01 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	const char s[] = "ciao sono Paola";
	int c = 's';
	size_t n = 4;
	printf("%p\n", ft_memchr(s, c, n));
	return(0);
}*/
