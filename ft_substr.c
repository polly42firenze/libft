/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:23:33 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 16:32:13 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len + start > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	const char s[] = "ciao sono Paola";
	unsigned int start = 3;
	size_t len = 11;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
