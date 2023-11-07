/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:21:04 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 19:21:47 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <stdio.h>

int main ()
{
	
	int fd = 1;
	char s[] = "ciao sono Paola";
	ft_putendl_fd(s, fd);
	return(0);
}*/
