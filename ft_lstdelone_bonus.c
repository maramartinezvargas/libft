/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:20:46 by tamamart          #+#    #+#             */
/*   Updated: 2025/09/06 23:38:27 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node;
	
	node = ft_lstnew(malloc(20)); 
	if (!node)
		return (1);
	ft_lstdelone(node, del);
	return (0);
} */