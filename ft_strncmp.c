/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:25:18 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:25:24 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	if (!n)
		return (0);
	i = 0;
	while (s1_cpy[i] && s2_cpy[i] && s1_cpy[i] == s2_cpy[i] && i < n)
		i++;
	if (i < n)
	{
		return (s1_cpy[i] - s2_cpy[i]);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "c";
	char s2[] = "ciao";
	unsigned int n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
