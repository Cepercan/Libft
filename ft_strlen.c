/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:14:18 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:08:48 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
/*
	Calcula la longitud de una cadena de caracteres.

	Recibe:
		* str: la cadena de caracteres.

	Devuelve:
		* la longitud de la cadena de caracteres.
*/
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
