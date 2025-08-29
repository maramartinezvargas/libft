/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:58:25 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/29 22:13:27 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*  #include <stdio.h>

 // PRUEBA DE LA FUNCIÓN
 char	change_case(unsigned int i, char c)
 {
	 if (i % 2 == 0 && c >= 'a' && c <= 'z')
		 return (c - 32);
	 else if (i % 2 != 0 && c >= 'A' && c <= 'Z')
		 return (c + 32);
	 return (c); 
 }
int	main(void)
{
	char const	*s = "hola mundo insensato!";
	char		*result;

	result = ft_strmapi(s, change_case);
	if (result != NULL)
	{
		printf("CONVERSIÓN DE PARES A MAYÚSCULAS E IMPARES A MINÚSCULAS
		(0 par):\n");
		printf("Cadena original: %s\n", s);
		printf("Cadena modificada: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al reservar memoria.\n");
	}
	return (0);
} */