/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:49:08 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/14 17:46:55 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		check;
	const char	*inicio;
	char	*ptr;

	inicio = little;
	check = 0;
    ptr = NULL;
	if (!*little)
		return ((char *)big);
	while (len--)
	{
		if (*big == *little)
		{
			little++;
			if (check == 0)
				ptr = (char *)big;
            check++;
		}
		else if (!*little)
			break ;
		else
		{
			little = inicio;
			check = 0;
            ptr = NULL;
		}
        big++;
	}
    if (*little)
    {
        ptr = NULL;
    }
	return (ptr);
}
