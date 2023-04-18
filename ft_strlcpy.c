/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:14:12 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:08:29 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
/*
	Copia una cadena de caracteres en otra cadena de caracteres, pero con un tamaño máximo.

	Recibe:
		* dst: puntero a la cadena de destino.
		* src: puntero a la cadena de origen.
		* size: tamaño máximo de la cadena de destino, incluyendo el terminador.

	Devuelve:
		* El tamaño de la cadena original (sin contar el terminador).
*/
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hola mundo";
	char dst1[7];
	char dst2[7];
	size_t len1;
	size_t len2;

	// Copiar los primeros 6 caracteres de src a dst1 con ft_strlcpy
	size_t len1 = ft_strlcpy(dst1, src, 7);

	// Copiar los primeros 6 caracteres de src a dst2 con strlcpy
	size_t len2 = strlcpy(dst2, src, 7);

	// Comparación 1: Verificar si las cadenas son iguales y tienen la misma longitud
	if (strcmp(dst1, dst2) == 0 && len1 == len2)
		printf("Las funciones hacen lo mismo en la comparación 1!\n");
	else
		printf("Las funciones NO hacen lo mismo en la comparación 1!\n");

	// Copiar los primeros 0 caracteres de src a dst1 con ft_strlcpy
	len1 = ft_strlcpy(dst1, src, 0);

	// Copiar los primeros 0 caracteres de src a dst2 con strlcpy
	len2 = strlcpy(dst2, src, 0);

	// Comparación 2: Verificar si las cadenas son iguales y tienen la misma longitud
	if (strcmp(dst1, dst2) == 0 && len1 == len2)
		printf("Las funciones hacen lo mismo en la comparación 2!\n");
	else
		printf("Las funciones NO hacen lo mismo en la comparación 2!\n");

	// Copiar todos los caracteres de src a dst1 con ft_strlcpy
	len1 = ft_strlcpy(dst1, src, strlen(src) + 1);

	// Copiar todos los caracteres de src a dst2 con strlcpy
	len2 = strlcpy(dst2, src, strlen(src) + 1);

	// Comparación 3: Verificar si las cadenas son iguales y tienen la misma longitud
	if (strcmp(dst1, dst2) == 0 && len1 == len2)
		printf("Las funciones hacen lo mismo en la comparación 3!\n");
	else
		printf("Las funciones NO hacen lo mismo en la comparación 3!\n");
	return 0;
}
*/