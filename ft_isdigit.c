/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:34:19 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 17:18:34 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
/*
	Determina si un carácter es un dígito o no.

	Recibe:
		* c: El carácter a verificar.

	Devuelve:
		* 1 si el carácter es un dígito
		* 0 en caso contrario.
 */
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
