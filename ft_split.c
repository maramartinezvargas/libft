/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:14:49 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/28 22:28:00 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			count++;
	}
	return (count);
}

static int	ft_place_words(char const *s, char c, char **arr)
{
	int	word_i;
	int	word_len;

	word_i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			arr[word_i] = malloc(word_len + 1);
			if (!arr[word_i])
			{
				while (word_i--)
					free(arr[word_i]);
				return (0);
			}
			ft_strlcpy(arr[word_i++], s, word_len + 1);
			s += word_len;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (count + 1));
	if (!new)
		return (NULL);
	ft_place_words(s, c, new);
	new[count] = NULL;
	return (new);
}

/* #include <stdio.h>
int	main(void)
{
	char const	*s = "   Hola   que   tal   ";
	char		c = ' ';
	char		**arr = ft_split(s, c);
	int			i;

	if (arr)
	{
		i = 0;
		while (arr[i])
		{
			printf("Palabra %d: '%s'\n", i, arr[i]);
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	return (0);
} */