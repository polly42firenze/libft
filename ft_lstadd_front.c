/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:54:49 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/14 18:15:45 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

/*
#include <stdio.h>

int	main()
{
	char str3[] = "hgjhgjhg";
	char str[] = "ciao sono Paola";
	t_list *i = ft_lstnew(str3);
	t_list *j = ft_lstnew(str);
	t_list *str2 = NULL; //perche' e' l'inizio
	ft_lstadd_front (&str2, i);
	ft_lstadd_front (&str2, j);
	printf("%s\n", (char *)str2->content);
	printf("%s\n", (char *)str2->next->content);
	return(0);
}*/
