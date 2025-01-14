/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:05:52 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/14 17:19:59 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_printf(const	char *str, ...);
unsigned int	ft_num_nosign(unsigned int num);
int				ft_punt_hexa(void *p);
int				ft_strlen(char *s);
int				ft_hexa_min(int num);
int				ft_hexa_mayus(int num);

#endif