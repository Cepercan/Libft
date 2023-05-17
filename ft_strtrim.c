/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:57:35 by cperez-c          #+#    #+#             */
/*   Updated: 2023/05/17 14:53:14 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
/*
	Crea una nueva cadena a partir de la cadena 's1', 
		eliminando los caracteres que se encuentran en la cadena 'set'
		al principio y al final de 's1'.

	Recibe:
	* s1: la cadena de caracteres que se quiere trimmear.
	* set: los caracteres que se quieren eliminar al principio y al final de la cadena 's1'.

	Devuelve:
	* Un puntero a la nueva cadena de caracteres creada.
	* NULL si no se pudo reservar memoria para la nueva cadena.
*/
{
	char	*result;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	result = ft_calloc(end - start + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
