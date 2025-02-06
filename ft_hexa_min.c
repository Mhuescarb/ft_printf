/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:33:49 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/06 14:41:10 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_min (unsigned long long n, int *count)
{
	char *hexchar;

	hexchar = "0123456789abcdef";
	if (n >= 16)
		ft_hexa_min( n / 16, count );
	ft_putchar(hexchar[n % 16], count);
	return (*count);
}

 /*int main()
{
    unsigned long long number = 42;
    int count = 0;

    ft_hexa_min(number, &count);
	
    return 0;
}*/
