/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:10:47 by tamamart          #+#    #+#             */
/*   Updated: 2025/09/06 22:40:44 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return (NULL);
	aux = lst;
	while (aux->next)
	{
		aux = aux->next;
	}
	return (aux);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Nodo 1");
	list->next = ft_lstnew("Nodo 2");
	list->next->next = ft_lstnew("Nodo 3");

	printf("Último nodo: %s\n", (char *)ft_lstlast(list)->content);
	free(list->next->next);
	free(list->next);
	free(list);
	return (0);
} */