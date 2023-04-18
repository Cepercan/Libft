/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:43:36 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/10 19:03:23 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
/*
	Convierte el caracter 'c' a su correspondiente en mayúscula si es una letra minúscula.

	Recibe:
		 c: el caracter a convertir.

	Devuelve:
		* El caracter convertido a mayúscula si es una letra minúscula.
		* El mismo caracter 'c' si no es una letra minúscula.
*/
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
