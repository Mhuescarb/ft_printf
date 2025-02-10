/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:36:03 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/10 17:49:05 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_point(unsigned long long pointer, int *count)
{
	if (!pointer)
	{
		write(1, "(NULL)", 6);
		*count += 6;
	}
	write(1, "0x", 2);
	*count += 2;
	ft_hexa_min(pointer, count);
}
 /*
repasar los dos resultados del main, no devuelven lo mismo
 int main() 
{
    unsigned long long pointer = 17;
    int count = 0;

    ft_hexa_point(pointer, &count);
	

	int	x = 17;
	int *ptr = &x;
	printf("\n Hexa_address: %p, value %d", ptr,*ptr);
	
    return 0;
}
*/
	
