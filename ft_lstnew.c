/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:14:46 by tamamart          #+#    #+#             */
/*   Updated: 2025/09/06 20:30:40 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("Hola, mundo insensato!")); 
					// ft_strdup to allocate content with malloc
	if (node)
	{
		printf("Contenido del nodo: %s\n", (char *)node->content);
		if (node->next)
			printf("Siguiente nodo: %s\n", (char *)node->next->content);
		else
			printf("Siguiente nodo: NULL\n");
		free(node->content);
		free(node);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
} */