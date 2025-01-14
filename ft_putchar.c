/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:04:17 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/14 17:26:50 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h" */
#include <stdio.h>


int	    ft_putchar(int c)
{
	if (write (1, &c, 1)) !=1
		return (1);
}

int	main (void)
{
	ft_putchar ('a');
	return (0);
}