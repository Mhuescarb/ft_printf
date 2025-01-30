/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:03:19 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/30 16:54:25 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
#include <unistd.h>

/*static	int	int_max(int n)
{
	(void)n;
	if (write(1, "4294967295", 10) != 10)
		return (-1);
	return (10);
}
*/

unsigned int	ft_unsigned(unsigned int num)

{
	int	count;

	count = 0;
	
	if (num > 9)
	{
		count = ft_unsigned (num / 10);
		if (count == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar(('0' + num)) == -1)
			return (-1);
		count++;
	}
	return (count);
}

/* int main(void)
{
    unsigned int num1 = 1230998000;
    unsigned int num2 = 4294967295;
    unsigned int num3 = 9;
    unsigned int num4 = 0;

    printf("Probando ft_unsigned:\n");

    printf("\nNúmero: %u\n", num1);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num1));

    printf("\nNúmero: %u\n", num2);
    printf(" Dígitos escritos: %u\n", ft_unsigned(4294967295));

    printf("\nNúmero: %u\n", num3);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num3));

    printf("\nNúmero: %u\n", num4);
    printf(" Dígitos escritos: %u\n", ft_unsigned(num4));

    return 0;
}
*/