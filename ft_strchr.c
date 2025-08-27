/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:19:39 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/27 16:17:57 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/* unsigned char	*str;
unsigned char	character;
size_t			i;

str = (unsigned char *)s;
character = (unsigned char)c;
i = 0;
while (str[i])
{
	if (str[i] == character)
		return (&str[i]);
	i++;
}
if (character == '\0')
	return ((char *)&str[i]);
return (0); */

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*s = "Hola mundo insensato!";
	int			c;
	char		*result1;
	char		*result2;

	c = 'a';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	c = 'b';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	c = '\0';
	result1 = ft_strchr(s, c);
	result2 = strchr(s, c);
	printf("ft_strchr: %s\n", result1);
	printf("strchr: %s\n", result2);

	return (0);
} */