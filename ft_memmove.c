/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:37:10 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/27 15:07:27 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*dst_temp;
	const unsigned char		*src_temp;
	size_t					i;

	dst_temp = (unsigned char *)dst;
	src_temp = (const unsigned char *)src;
	if (src_temp < dst_temp)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst_temp[i] = src_temp[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dst);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "Hola mundo insensato!";
	char dest1[22];
	char dest2[22];
	size_t n = 22;
	ft_memmove(dest1, str, n);
	memmove(dest2, str, n);
	printf("ft_memmove: %s\n", dest1);
	printf("memmove:    %s\n", dest2);
	return (0);
}*/