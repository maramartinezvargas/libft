/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:26:01 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/30 14:36:26 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str_temp;

	str_temp = (unsigned char *)str;
	while (n > 0)
	{
		*str_temp++ = (unsigned char)c;
		n--;
	}
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char str[] = "Hola mundo insensato!";
	printf("Antes: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("Después: %s\n", str);
	return 0;
} */