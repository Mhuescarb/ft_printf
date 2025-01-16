/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:21:33 by mhuescar          #+#    #+#             */
/*   Updated: 2025/01/16 11:27:13 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h" */
#include <unistd.h>

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!*s)
		return (-1);
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

/*
	int main ()
{
ft_putstr ("hola maricarmen");
return (0);
}
*/