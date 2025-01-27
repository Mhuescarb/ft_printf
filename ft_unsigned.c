/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:03:19 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/27 18:41:29 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
#include <unistd.h>

unsigned	int ft_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
	{
		count = ft_unsigned (num / 10);
		if (count== -1)
			return (-1);
	num = num % 10;
	}

	if (num <= 9)
	{
		if (ft_putchar(('0' + num)) == -1)  // Convertimos el dígito a carácter y lo imprimimos
            return (-1);  // Si hay un error al escribir
        count++;  // Incrementamos el contador de caracteres escritos
    }

    return (count);  // Retornamos el número de caracteres escritos
}
/* int main(void)
{
    unsigned int num1 = 123;
    unsigned int num2 = 4567;
    unsigned int num3 = 9;
    unsigned int num4 = 0;

    // Probamos la función con diferentes números
    printf("Probando ft_unsigned:\n");

    printf("\nNúmero: %u\n", num1);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num1));  // Debería imprimir '123' y luego '3'

    printf("\nNúmero: %u\n", num2);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num2));  // Debería imprimir '4567' y luego '4'

    printf("\nNúmero: %u\n", num3);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num3));  // Debería imprimir '9' y luego '1'

    printf("\nNúmero: %u\n", num4);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num4));  // Debería imprimir '0' y luego '1'

    return 0;
}
*/