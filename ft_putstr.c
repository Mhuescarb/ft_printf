/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:21:33 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/12 20:26:15 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	if (!str)
	{
		write (1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	if (*str == '\0')
		return ;
	ft_putchar(*str, count);
	ft_putstr(str + 1, count);
}


/* 
int main (void)
{
char *str = "Maricarmen";
int count = 0;

ft_putstr(str, &count);
printf("\nSe escribieron %d caracteres.\n", count); 

return 0;
}
*/