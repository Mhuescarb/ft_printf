/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:55:21 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/12 15:58:17 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_format(char s, va_list args, int *count)
{
	if (s == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (s == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (s == 'p')
		ft_hexa_point(va_arg(args, unsigned long long), count);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (s == 'u')
		ft_unsigned(va_arg(args, unsigned int), count);
	else if (s == 'x')
		ft_hexa_min(va_arg(args, int), count);
	else if (s == 'X')
		ft_hexa_may(va_arg(args, int), count);
	else if (s == '%')
		ft_putchar('%', count);
	else
		ft_putchar(s, count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
				ft_format (format[i], args, &count);
		}
		else
		{
			ft_putchar (format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
/* #include "ft_printf.h"

int main()
{
    int printed_chars;

    // Ejemplo 1: Solo texto
    printed_chars = ft_printf("Hello, world!\n");
    printf("Printed characters: %d\n\n", printed_chars);

    // Ejemplo 2: Con un especificador de formato %s
    printed_chars = ft_printf("Hello %s, your balance is %d.\n", "Alice", 100);
    printf("Printed characters: %d\n\n", printed_chars);

    // Ejemplo 3: Con múltiples especificadores de formato
    printed_chars = ft_printf("Character: %c, String: %s, Number: %d, Hex: %x\n", 'A', "test", 255, 255);
    printf("Printed characters: %d\n\n", printed_chars);

    // Ejemplo 4: Usando un puntero con %p
    int num = 42;
    printed_chars = ft_printf("Pointer: %p\n", &num);
    printf("Printed characters: %d\n\n", printed_chars);

    // Ejemplo 5: Porcentaje literal %
    printed_chars = ft_printf("A percentage sign: %%\n");
    printf("Printed characters: %d\n\n", printed_chars);

    return 0;
}
*/
