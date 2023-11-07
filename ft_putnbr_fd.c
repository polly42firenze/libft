/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:15:42 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/10 19:18:51 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(int n, int fd)
{
	n += 48;
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n < 10)
	{
		ft_print(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_print(n % 10, fd);
	}
}
/*
#include <stdio.h>

int main ()
{
	
	int fd = 1;
	int n = 987654321;
	ft_putnbr_fd(n, fd);
	return(0);
}*/
