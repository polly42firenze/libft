/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:24:27 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:24:31 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		src_len += size;
	}
	else
	{
		src_len += dest_len;
	}
	while (src[j] != '\0' && (dest_len +1) < size)
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main()
{
	char dest[] = "ciao ciao";
	char src[] = "ciao ciao";
	unsigned int size = 3;
	printf("%d\n", ft_strlcat(dest, src, size));
	return (0);
}*/
