/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:27:25 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:27:28 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (s2[a] == 0)
		return ((char *)s1);
	while (s1[a] && a < n)
	{
		b = 0;
		while (s1[a + b] == s2[b] && (a + b) < n)
		{
			if (s2[b + 1] == '\0')
				return ((char *)s1 + a);
			b++;
		}
		a++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "ciao";
	char s2[] = "i";
	unsigned int n = 3;
	printf("%s\n", ft_strnstr(s1, s2, n));
	return (0);
}*/
