/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:55:21 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/11 16:32:22 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void ft_format(char s, va_list format, int *count)
{
	if(s == 'c')
		ft_putchar(va_arg(format, int),count);
	else if(s == 's')
		ft_putstr(va_arg(format, char*),count);
	else if(s == 'p')
		ft_hexa_point(va_arg(format, unsigned long long), count);
	else if(s == 'd' || s == 'i')
		ft_putnbr(va_arg(format, int), count); 
		
}


int	ft_printf(const char *, ...)
{
	
}
