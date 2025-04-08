/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:47:55 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/08 17:48:31 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer1[] = "Hola que tal";
   	printf( "Before: %s\n", buffer1 );
   	bzero( buffer1, 3);
   	printf( "After:  %s\n", buffer1 );

	char	buffer2[] = "Hola que tal";
	printf("Before: %s\n", buffer2);
	ft_bzero(buffer2, 3);
	printf("After:  %s\n", buffer2);
	return (0);
}
