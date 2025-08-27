/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 00:57:09 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/24 01:09:47 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* #include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(void)
{
    printf("ft_isascii vs isascii\n");
    printf("----------------------\n");

    printf("ft_isascii(65) = %d\n", ft_isascii(65) != 0);
    printf("   isascii(65) = %d\n", isascii(65) != 0);
    printf("----------------------\n");

    printf("ft_isascii(128) = %d\n", ft_isascii(128) != 0);
    printf("   isascii(128) = %d\n", isascii(128) != 0);
    printf("----------------------\n");

    printf("ft_isascii(-1) = %d\n", ft_isascii(-1) != 0);
    printf("   isascii(-1) = %d\n", isascii(-1) != 0);
    printf("----------------------\n");

    printf("ft_isascii(0) = %d\n", ft_isascii(0) != 0);
    printf("   isascii(0) = %d\n", isascii(0) != 0);
    printf("----------------------\n");

    printf("ft_isascii(127) = %d\n", ft_isascii(130) != 0);
    printf("   isascii(127) = %d\n", isascii(130) != 0);
    printf("----------------------\n");

    return (0);
} */