/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:21:33 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/14 12:41:52 by mhuescar         ###   ########.fr       */
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
ft_printf("\nSe escribieron %d caracteres con ft_printf.\n", count); 

count = 0;

printf("%s", str);
count += strlen(str); 
printf("\nSe escribieron %d caracteres con printf.\n", count);

return 0;
}
*/
