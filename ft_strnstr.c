/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:49:08 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/14 18:47:37 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    int n;
    int i;

    i = 0
    n = 0;
	if (!*little)
        return((char *)big);
    while (n < len)
    {
        if (big[n] == little[i])
        {
            if (check == 0)
                ptr = big;
            i++;
        }
        else if (little == '\0')
            break ;
        else
        {
            check = 0;
            little = inicio;
        }
        n++;
    }
    if (*little)
        ptr = NULL;
    return (ptr);
}
