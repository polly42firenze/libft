/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:12:34 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:12:40 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}
/*
#include <stdio.h>

int	main()
{
	size_t n = 6;
	char s[] = "ciao";
	ft_bzero(s, n);
	printf("%d%d\n", s[1], s[3]);
	return(0);
}*/
