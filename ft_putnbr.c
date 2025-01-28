/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:02:13 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/28 18:31:43 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static	int	int_min(int n)
{
	(void)n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int n)

{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (int_min(n));
	if (n < 0 && ++count)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		if (count == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar (('0' + n)) == -1)
			return (-1);
		count++;
	}
	return (count);
}
/* int main(void)
{
    int num1 = -12345;
    int num2 = 2147483647;  // Número máximo positivo de un int
    int num3 = -2147483648; // Número mínimo de un int
    int num4 = 0;           // Caso con cero
    
    // Probamos ft_putnbr con varios números
    ft_putnbr(num1); // Imprime: -12345
    ft_putchar('\n'); // Salto de línea para separar las salidas
    
    ft_putnbr(num2); // Imprime: 2147483647
    ft_putchar('\n');
    
    ft_putnbr(num3); // Imprime: -2147483648
    ft_putchar('\n');
    
    ft_putnbr(num4); // Imprime: 0
    ft_putchar('\n');
    
    return 0;
}
*/
