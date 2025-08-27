/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:34:51 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/27 17:09:45 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función strnstr() localiza la primera ocurrencia de la cadena terminada 
en cero s2 en la cadena s1 , donde se buscan como máximo n bytes. Los caracteres
que aparecen después de un carácter '\0' no se buscan.*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] != '\0' && big[i + j] == little[j]
				&& little[j] != '\0' && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*big = "Hola mundo insensato!";
	const char	*little = "mundo";
	char		*result;
	size_t		n;

	n = 10;
	result = ft_strnstr(big, little, n);
	printf("ft_strnstr: %s\n", result);

	n = 15;
	result = ft_strnstr(big, little, n);
	printf("ft_strnstr: %s\n", result);

	n = 5;
	result = ft_strnstr(big, little, n);
	printf("ft_strnstr: %s\n", result);
	return (0);
} */