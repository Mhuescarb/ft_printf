/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:21:33 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/10 15:45:22 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	if (!s)
	{
		/*ft_putstr("NULL", count);
		return ;*/
		write(1, "NULL", 4 != 4);
		return ;
	}
	if (*s == '\0')
		return ;
	ft_putchar(*s, count);
	ft_putstr(s + 1, count);
}

/*int main (void)
{
char *s = "Maricarmen";
int count = 0;

ft_putstr(s, &count);
printf("\nSe escribieron %d caracteres.\n", count); 

return 0;
}
*/