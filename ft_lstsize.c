/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:18:08 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/14 18:21:56 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = (lst)->next;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	t_list *i = (t_list *)malloc(sizeof(t_list));
	t_list *j = (t_list *)malloc(sizeof(t_list));
	t_list *k = (t_list *)malloc(sizeof(t_list));
	i->content = "a";
	j->content = "b";
	k->content = "c";
	i->next = j;
	j->next = k;
	k->next = h;
	h->next = NULL;
	if (ft_lstsize(i) != 0)
	{
        printf("%d\n", ft_lstsize(i));
	}
	else
	{
        printf("La lista è vuota.\n");
	}

	return (0);
}*/
