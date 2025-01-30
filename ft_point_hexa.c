/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:27:27 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/30 17:30:26 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int hexa_convert(char *hexa, unsigned long long n, int c)
{
unsigned long long	h;

    h = ft_strlen(hexa);

if (n >= h) 
{
	{
		c = hexa_convert(hexa, n / h, c);
		if (c == -1)
			return (-1);
		if (write (1, &hexa[n % h], 1) == -1)
			return (-1);
		c++;
	}
}

}
