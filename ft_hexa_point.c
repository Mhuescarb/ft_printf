/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:36:03 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/11 16:27:10 by mhuescar         ###   ########.fr       */
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
 
int main() 
{
    unsigned long long pointer = 17;

    int count = 0;
	printf("\n Usando ft_printf");

    ft_hexa_point(pointer, &count);
    printf("\nTotal caracteres impresos con ft_hexa_point: %d\n", count);

    printf("%p", (void*)pointer);
    printf(" Usando printf:");


    return 0;
}
*/