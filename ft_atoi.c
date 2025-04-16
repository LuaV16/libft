/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:46:23 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/15 13:20:48 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	negative;

	negative = 0;
	n = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			negative = 1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		n += *nptr - '0';
		if (ft_isdigit(*(nptr + 1)))
			n = n * 10;
		nptr++;
	}
	if (negative == 1)
		n *= -1;
	return (n);
}
