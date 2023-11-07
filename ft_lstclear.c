/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:16:30 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/17 14:30:50 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next;
	}
}

/* #include <stdio.h>
void del(void *content)
{
       content = NULL;
} */
/*
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
	ft_lstclear(&i, del);
	if (i == NULL)
		printf("la lista e' stata calncellata\n");
	else if(i!=NULL)
		printf("non funziona un cazzo\n");
	return(0);
}
*/