/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:29:04 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/10 14:17:23 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *coincidence;
	char *ptr;
	int coincidence_n;

	coincidence_n = 0;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == c)
		{
			coincidence = ptr;
			coincidence_n++;
		}
		ptr++;
	}
	if (coincidence_n == 0)
	{
        if (c == '\0')
            return (ptr);
		return (NULL);
	}
	return (coincidence);
}