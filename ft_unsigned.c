/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:03:19 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/11 15:15:40 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	ft_unsigned(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_unsigned (n / 10, count);
		ft_unsigned (n % 10, count);
	}
	else
	{
		ft_putchar(n + '0', count);
	}
}

/*int main()
{
    int count = 0;
    unsigned int num = 12345;

	printf("\n Usando ft_printf");
    ft_unsigned(num, &count);
	printf("/Dígitos escritos: %d\n", count);
	

	printf( "\n%u", num);
	printf(" Usando printf");


    // Usamos printf para imprimir el contador de caracteres
    printf("/Dígitos escritos: %d\n", count);

    return 0;
}
	*/