/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:13:05 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:05:08 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
/*
	Busca la primera aparición del caracter 'c' en la cadena 'str'.

	Recibe:
		* str: la cadena en la que buscar el caracter.
		* c: el caracter a buscar.

Devuelve:
		* Un puntero al primer byte de la cadena que contiene a 'c'
		* NULL si no se encuentra.
*/
{
	while (*str != (char) c)
	{
		if (!*str++)
			return (NULL);
	}
	return ((char *) str);
}
