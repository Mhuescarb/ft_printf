/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:21:33 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/28 18:31:44 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h" */
#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *s)

{
	size_t	i;

	i = 0;
	if (!s)
	{
		if (write(1, "NULL", 4) != 4)
			return (-1);
		return (4);
	}
	while (s[i] != '\0')
	{
		if (write (1, &s[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}

/* int main (void)
{
char *s = "holahola";

int len1 = ft_putstr(s);
printf("\nSe escribieron %d caracteres.\n", len1); 

return 0;
}
*/
