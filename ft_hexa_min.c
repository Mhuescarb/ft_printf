/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:33:49 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/10 17:49:10 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_min(unsigned long long n, int *count)
{
	char	*hexchar;

	hexchar = "0123456789abcdef";
	if (n >= 16)
		ft_hexa_min(n / 16, count);
	ft_putchar(hexchar[n % 16], count);
	return (*count);
}

/*int main(void)
{
    unsigned long long number = 11123;
    int count = 0;

    ft_hexa_min(number, &count);
	printf( "\n Hexaresult: %x", 11123);
	
    return 0;
}
	*/
