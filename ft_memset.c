/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:22:07 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:22:11 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		*(pointer + i++) = (unsigned char)c;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char s[] = "ciao sono Paola";
	int c = 'a';
	size_t n = 4;
	printf("%p\n", ft_memset(s, c, n));
	return(0);
}*/
