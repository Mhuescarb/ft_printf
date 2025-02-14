/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:02:13 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/14 13:39:06 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)

{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, count);
	}
	ft_putchar((n % 10) + '0', count);
}
/*
 	int main(void)
	{
		int count= 0;
		int num = 42;  
	
		ft_printf("Salida usando ft_putnbr:\n");
		ft_putnbr(num, &count);
		ft_printf("\nTotal caracteres impresos con ft_putnbr: %d\n", count);
		
		
		printf("Salida usando printf:\n");
		count = printf("%d", num); 
		printf("\nTotal caracteres impresos con printf: %d\n", count);
	
		return 0;
	}
		
*/