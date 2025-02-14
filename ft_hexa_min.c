/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:33:49 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/14 13:21:33 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_min(unsigned long long n, int *count)
{
	char	*hexchar;

	hexchar = "0123456789abcdef";
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (n < 0)
		n = -n;
	if (n >= 16)
		ft_hexa_min(n / 16, count);
	ft_putchar(hexchar[n % 16], count);
}

/*
int main(void)
{
unsigned long long number = 42;
int count = 0;

ft_printf("\nHexaresult con ft_printf: ", count);
ft_hexa_min(number, &count);

ft_printf("\nCaracteres escritos con ft_printf: %d \n", count); 
	
printf("\nHexaresult con printf: %x", 42);
printf("\nCaracteres escritos con printf: %d", count);


return 0;
}
*/