/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:47:55 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/16 15:46:48 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <ctype.h>
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include <stdio.h>

static size_t   ft_count(char const *s, char c)
{
    size_t  n;
    size_t  i;
    int check;

    check = 0;
    i = 0;
    n = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && check == 0)
        {
            check = 1;
            n += 1;            
        }
        if (s[i] == c && check == 1)
        {
            check = 0;
        }
        i++;
    }
    return (n);
}

int	main(void)
{
	printf("%zu", ft_count("cccccaacacacaaa", 'c'));
	return (0);
}
