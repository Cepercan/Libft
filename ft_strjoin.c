/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:38:07 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:07:48 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
/*
	Concatena dos cadenas de caracteres en una nueva cadena de caracteres.

	Recibe:
		* s1: la primera cadena de caracteres a concatenar.
		* s2: la segunda cadena de caracteres a concatenar.

	Devuelve:
		* un puntero a la nueva cadena de caracteres concatenada
		* NULL si falla la reserva de memoria.
*/
{
	size_t	j;
	size_t	i;
	char	*result;

	i = -1;
	result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!result)
		return (0);
	while (s1[++i])
			result[i] = s1[i];
	j = -1;
	while (s2[++j])
		result[i+j] = s2[j];
	return (result);
}
