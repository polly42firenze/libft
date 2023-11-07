/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:38:50 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/14 18:42:36 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main()
{
	t_list *i = (t_list *)malloc(sizeof(t_list));
	t_list *j = (t_list *)malloc(sizeof(t_list));
	t_list *k = (t_list *)malloc(sizeof(t_list));
	i->content = "1";
	j->content = "2";
	k->content = "3";
	i->next = j;
	j->next = k;
	k->next = NULL;
	if (ft_lstlast(i) != NULL)
	{
        printf("%p\n", ft_lstlast(i)->content);
	}
	else
	{
        printf("La lista è vuota.\n");
	}

	return (0);
}*/
