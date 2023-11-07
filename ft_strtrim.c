/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:22:00 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 18:08:01 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int) s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, (int) s1[end]) && start < end)
		end--;
	str = ft_calloc(end - start + 2, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1 + start, end - start + 2);
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	const char s1[]="ciao sono Paola";
	const char set[]="c""a";
	printf("%s\n", ft_strtrim(s1, set));
	return(0);
}*/
