/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:15:46 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/30 14:21:27 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
#include <stdio.h>

void print_char_with_index(unsigned int index, char *c)
{
	printf("Indice: %u, Caracter: %c\n", index, *c);
}

int main(void)
{
	char str[] = "Hola mundo insensato!";
	printf("Cadena original: %s\n", str);
	ft_striteri(str, print_char_with_index);
	return (0);
} */