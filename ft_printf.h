/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:05:52 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/27 18:42:50 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int			ft_putchar(int c);
int			ft_putstr(char *s);
unsigned int    ft_unsigned(unsigned int num);


#endif