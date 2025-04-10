/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:08:04 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/10 16:24:43 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char	*ptr;

	ptr = (char *)s;
	while (*ptr != c && n > 0)
	{
		ptr++;
        n--;
	}
	if (n == 0)
	{
		if (c == '\0')
			return (ptr);
		else
			return (NULL);
	}
	return (ptr);
}