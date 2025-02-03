/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:33:49 by mhuescar          #+#    #+#             */
/*   Updated: 2025/02/03 17:36:33 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función única para convertir números a hexadecimal (tanto int como long long)
// Esta versión acepta la cadena "hexa" como parámetro.
static int puthexa_generic(char *hexa, unsigned long long n, int c) 
{
    unsigned long long h = 16;  // Siempre será 16 para hexadecimal

    // Si el número es mayor o igual que la base (16), seguimos con la recursión
    if (n >= h)
 {
        c = puthexa_generic(hexa, n / h, c); // Llamada recursiva con la parte superior del número
        if (c == -1) return -1; // Manejo de error
        if (write(1, &hexa[n % h], 1) == -1) return -1; // Escribir el dígito hexadecimal
        c++; // Incrementar contador de caracteres
} else 
    {
        // Caso base: escribir el último dígito hexadecimal
        if (write(1, &hexa[n], 1) == -1) return -1;
        c++; // Incrementar contador de caracteres
    }

    return c; // Retornar el número total de caracteres impresos
}

// Función principal que maneja tanto int como long long
int ft_hexa_min(int n) 
{
    int let = 0;
    // Convertimos a unsigned long long, sin importar si es negativo o positivo
    let = puthexa_generic("0123456789abcdef", (unsigned long long)n, let);
    return let;
}
