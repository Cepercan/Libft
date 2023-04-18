/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:08:09 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 12:08:09 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
/*
	Copia un bloque de memoria a otro, incluso si se superponen.

	Recibe:
		* dst: un puntero al bloque de memoria destino.
		* src: un puntero al bloque de memoria fuente.
		* n: la cantidad de bytes a copiar.

	Devuelve:
		* un puntero al bloque de memoria destino.
*/
{
	unsigned char		*t_str1;
	unsigned const char	*t_str2;

	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	t_str1 = (unsigned char *)str1;
	t_str2 = (unsigned const char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		t_str1[n] = t_str2[n];
	return (str1);
}
