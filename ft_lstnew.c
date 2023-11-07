/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:47:57 by pdi-pint          #+#    #+#             */
/*   Updated: 2023/10/14 17:51:48 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*content_len;

	content_len = (t_list *)malloc(sizeof(t_list) * 1);
	if (!content_len)
		return (NULL);
	content_len -> content = content;
	content_len -> next = NULL;
	return (content_len);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "ciao sono Paola";
	t_list *i = ft_lstnew(str);
	printf("%s\n", (char *)i->content);
	return(0);
}*/
