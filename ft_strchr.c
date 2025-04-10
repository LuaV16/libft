/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:37:35 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/10 13:29:54 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c && *ptr)
	{
		ptr++;
	}
	if (*ptr == '\0')
	{
		if (c == '\0')
			return (ptr);
		else
			return (NULL);
	}
	return (ptr);
}
