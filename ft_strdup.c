/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:23:10 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 12:23:32 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "ciao sono Paola";
	printf("%s\n", ft_strdup(src));
	return(0);
}*/
