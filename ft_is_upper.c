/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_upper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:47:52 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/30 14:31:18 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/* #include <stdio.h>

int	main(void)
{
	int	c;

	c = 'C';
	printf("'%c' = %d\n", c, ft_is_upper(c));
	c = 'x';
	printf("'%c' = %d\n", c, ft_is_upper(c));
	c = '1';
	printf("'%c' = %d\n", c, ft_is_upper(c));
	c = '#';
	printf("'%c' = %d\n", c, ft_is_upper(c));
	return (0);
} */