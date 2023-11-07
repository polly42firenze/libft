/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:31:06 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/17 14:34:18 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*i;

	i = (t_list *)lst;
	if (i && f)
	{
		while (i)
		{
			f(i -> content);
			i = i -> next;
		}
	}
}
/*#include <stdio.h>

void *modifica_contenuto(void *valore_nodo)
{
    int *valore = (int *)valore_nodo;
    *valore += 100;
    return valore_nodo;
}

int main()
{
	t_list *head;
	t_list *nodo;
	t_list *newhead;
	int x = 10;
	int y = 20;
	
	head = ft_lstnew(&x);
	nodo = ft_lstnew(&y);
	ft_lstadd_back(&head, nodo);
	newhead = ft_lstiter(head, modifica_contenuto);

	while(newhead)
	{
	 int *valore = (int *)newhead->content;
        printf("%d\n", *valore);
        newhead = newhead->next;
	}
	return (0);
}*/
