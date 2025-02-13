/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_hexaconvert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:27:27 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/13 11:29:11 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_printf.h"

static int	hexa_convert(char *hexa, unsigned long long n, int c)
{
	unsigned long long	h;

	h = 16;
	if (n >= h)
	{
		
			c = hexa_convert(hexa, n / h, c);
			if (c == -1)
				return (-1);
			if (write (1, &hexa[n % h], 1) == -1)
				return (-1);
			c++;
	}
	
	else if (n < h)
	{
		if (write (1, &hexa[n], 1) == -1) siempre va a ser 1 char del 1 al -15 
			return (-1);
		c++;
	}
	return (c);
}
*/
/*

int	ft_point_hexa(void *p)
{
	unsigned long long	pointer;
	int					count;

	pointer = (unsigned long long)p;
	count = 0;
	if (write(1, "0x", 2) != 2)
		return (-1);
	count = hexa_convert ("0123456789abcdef", pointer, count);
	if (count == -1)
		return (-1);
	count += 2;
	return (count +2);
}
 int	main ()
{
	int	x;
	int	*p;

	x = 2;
	p = &x;

	int result = ft_point_hexa(p);
	printf ("\nCaracteres escritos: %d \n", result);
	return 0;
}

*/