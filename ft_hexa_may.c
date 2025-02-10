/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_may.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:14:15 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/10 17:49:22 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_may(unsigned long long n, int *count)

{
	char	*hexchar;

	hexchar = "0123456789ABCDEF";
	if (n >= 16)
		ft_hexa_may(n / 16, count);
	ft_putchar(hexchar[n % 16], count);
	return (*count);
}
/*int main(void)
{
	unsigned long long number = 11123;
	int count = 0;
		
	ft_hexa_may(number, &count);
			printf( "\n Hexaresult: %X", 11123);
			
			return 0;

}
*/