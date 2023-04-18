/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:37 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 11:33:45 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
/*
Determina si un carácter está dentro del rango ASCII o no.

	Recibe:
		* c: El carácter a verificar.

	Devuelve:
		* 1 si el carácter está dentro del rango ASCII
		* 0 en caso contrario.
 */
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
