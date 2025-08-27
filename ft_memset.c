/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:26:01 by tamamart          #+#    #+#             */
/*   Updated: 2025/08/25 20:36:46 by tamamart         ###   ########.fr       */
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
