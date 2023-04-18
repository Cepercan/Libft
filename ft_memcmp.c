/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:07:57 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 17:47:36 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
/*
	Compara dos bloques de memoria.

	Recibe:
		* s1: Un puntero al primer bloque de memoria a comparar.
		* s2: Un puntero al segundo bloque de memoria a comparar.
		* n:  La cantidad de bytes a comparar.

	Devuelve:
		* > 0 un entero mayor que cero si el primer bloque es mayor que el segundo,
 		* < 0 menor que cero si el primer bloque es menor que el segundo,
		* 0 cero si ambos bloques son iguales.*/
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
