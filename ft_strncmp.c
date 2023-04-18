/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:16:19 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/22 16:31:55 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/*
	Compara los primeros n caracteres de dos cadenas de caracteres.

	Recibe:
	* s1: la primera cadena de caracteres a comparar.
	* s2: la segunda cadena de caracteres a comparar.
	* n: la cantidad de caracteres que se compararán.

	Devuelve:
	* Un número entero mayor que cero si la cadena s1 es mayor que la cadena s2.
	* Cero si las cadenas son iguales.
	* Un número entero menor que cero si la cadena s1 es menor que la cadena s2.
*/
{
	int		k;
	size_t	i;

	i = 0;
	k = 0;
	while (i < n && (s2[i] != '\0' || s1[i] != '\0') && k == 0)
	{
		if (s1[i] != s2[i])
			k = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (k);
}
