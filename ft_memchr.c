/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:48:34 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 17:44:49 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*
	Busca un carácter en una porción de memoria.

	Recibe:
		* s: Un puntero a la porción de memoria donde buscar.
		* c: El carácter que se desea buscar.
		* n: El tamaño de la porción de memoria a buscar.

	Devuelve:
		* Un puntero al primer byte que contiene el carácter especificado,
		* NULL si el carácter no se encuentra en la porción de memoria.
*/
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
