/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:03:19 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/14 13:57:12 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	ft_unsigned(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_unsigned (n / 10, count);
		ft_unsigned (n % 10, count);
	}
	else
	{
		ft_putchar(n + '0', count);
	}
}

/*
int main()
{
    int count = 0;
    unsigned int num = 12345;

	
    ft_unsigned(num, &count);
	ft_printf("\nUsando ft_printf");
	ft_printf("\nDígitos escritos: %d\n", count);
	

	printf( "\n%u", num);
	printf("\nUsando printf");

    printf("\nDígitos escritos: %d\n", count);

    return 0;
}
	*/