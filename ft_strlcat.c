/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:14:07 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:08:15 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
/*
	Concatena dos cadenas de caracteres.

	Recibe:
		* dst: cadena de destino donde se copiará la concatenación.
		* src: cadena de origen que se concatenará con la cadena destino.
		* size: tamaño máximo de la cadena de destino.

	Devuelve:
		* la longitud total de la cadena resultante.
*/
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
