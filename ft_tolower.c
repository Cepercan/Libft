/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:09 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 12:15:09 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
/*
	Convierte el caracter 'c' a su correspondiente en minúscula si es una letra mayúscula.

	Recibe:
		* c: el caracter a convertir.

	Devuelve:
		* El caracter convertido a minúscula si es una letra mayúscula.
		* El mismo caracter 'c' si no es una letra mayúscula.
*/
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
