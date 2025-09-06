/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:45:36 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/30 15:13:14 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	int	*numbers;
	size_t	i;
	size_t	num;

	num = 5;
	numbers = (int *)ft_calloc(num, sizeof(int));
	if (numbers == NULL)
		return (1);
	printf("Array de %zu enteros inicializados a 0:\n", num);
	for (i = 0; i < num; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	free(numbers);
	return (0);
} */