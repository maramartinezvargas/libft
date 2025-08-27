/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 22:17:09 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/25 23:36:44 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	uc;

	ptr_s = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0 && *ptr_s != uc)
	{
		ptr_s++;
		n--;
	}
	if (n > 0)
		return (ptr_s);
	else
		return (NULL);
}

/* #include	<stdio.h>

int	main(void)
{
	const char	*str = "hola mundo";
	int			c = 'a';
	size_t		n = 4;

	char *p = ft_memchr(str, c, n);
	if (p != NULL)
		printf("Byte encontrado: %c\n", *p);
	else
		printf("Byte NO encontrado.");

	return (0);
} */