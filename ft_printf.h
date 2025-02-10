/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:05:52 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/10 17:49:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

void			ft_putchar(char c, int *count);
void			ft_putstr(char *s, int *count);
int				ft_hexa_min(unsigned long long n, int *count);
int				ft_hexa_may(unsigned long long n, int *count);
void			ft_hexa_point(unsigned long long pointer, int *count);
int				ft_putnbr(int n);
unsigned int	ft_unsigned(unsigned int num);
int				ft_strlen(char *s);



#endif