/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvargas- <lvargas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:47:19 by lvargas-          #+#    #+#             */
/*   Updated: 2025/04/08 17:10:05 by lvargas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(unsigned int c);
int				ft_isdigit(unsigned int c);
int				ft_isalnum(unsigned int c);
int				ft_isascii(unsigned int c);
int				ft_isprint(unsigned int c);
unsigned long	ft_strlen(const char *s);
void			*ft_memset(void *s, int c, unsigned long n);
void			ft_bzero(void *s, unsigned long n);

#endif