/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:27:52 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:27:55 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;

	s2 = NULL;
	while (*s)
	{
		if (*s == (char)c)
			s2 = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (s2);
}
/*
#include <stdio.h>

int	main()
{
	const char s[] = "ciao sono Paola";
	int c = 'o';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
