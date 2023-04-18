/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:34:27 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 17:18:16 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
/*
	Esta función se utiliza para determinar si un carácter es
		imprimible o no.

	* c -> (int) El carácter a verificar si es imprimible o no.

	La función devuelve un valor entero (1 o 0)
		que indica si el carácter proporcionado es imprimible o no.
		Si el carácter es imprimible, la función devuelve 1.
		De lo contrario, devuelve 0.
*/
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
