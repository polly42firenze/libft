/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:21:48 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:21:52 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	src2 = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	if (dest2 > src2)
		while (n-- > 0)
			dest2[n] = src2[n];
	else
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char dest[] = "ciao sono Paola";
	const char src[] = "aaaaaa";
	size_t n = 3;
	printf("%p\n", ft_memmove(dest, src, n));
	return(0);
}*/
