/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:34:53 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/26 14:32:37 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = 0;
	if (dstsize > 0)
	{
		while (src[size] != '\0' && size < dstsize - 1)
		{
			dst[size] = src[size];
			size++;
		}
		dst[size] = '\0';
	}
	while (src[size] != '\0')
		size++;
	return (size);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char dest1[15];
	char dest2[15];
	size_t result1; 
	size_t result2;

	result1 = ft_strlcpy(dest1, "hola que tal", 5);
	result2 = strlcpy(dest2, "hola que tal", 5);
	printf("ft_strlcpy: %s - return: %zu\n", dest1, result1);
	printf("strlcpy:    %s - return: %zu\n", dest2, result2);
	return (0);
} */