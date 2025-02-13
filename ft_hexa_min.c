/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:33:49 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/13 14:38:11 by mhuescar         ###   ########.fr       */
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

/*int main(void)
{
	unsigned long long number = 42;
	int count = 0;

	ft_hexa_min(number, &count);
	
	write(1, "\n", 1);
	write(1, "Total characters printed by ft_hexa_min: ", 43);
    char count_str[20];
    int len = snprintf(count_str, sizeof(count_str), "%d\n", count);
    write(1, count_str, len);
	
	printf( "\n Hexaresult by printf: %x", 42);
	printf( "\n Total characters printed by printf: %x", 42);


	return 0;
}
	*/
/*int main()
{
    int count = 0;
    unsigned long long numbers[] = {0, 1, 10, 255, 1048575, 4294967295ULL};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        count = 0; // Reiniciar el contador para cada número
        ft_hexa_min(numbers[i], &count);
        write(1, "\n", 1); // Nueva línea después de cada número
        write(1, "Total characters printed: ", 27);
        
        // Convertir el contador a cadena y mostrarlo
        char count_str[20];
        int len = snprintf(count_str, sizeof(count_str), "%d\n", count);
        write(1, count_str, len);
    }

    return 0;
}*/