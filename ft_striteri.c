/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:42:25 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/11 13:47:16 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

void my_toupper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int main()
{
	char s[]= "abcd";
	ft_striteri(s, &my_toupper);
	printf("%s\n", s);	
}*/
