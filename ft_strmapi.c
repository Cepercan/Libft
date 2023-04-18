/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:09:40 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:09:30 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
/*
	Aplica la función f a cada carácter de la cadena s y crea una nueva cadena con los resultados.

	Recibe:
		* s: la cadena de caracteres que se va a procesar.
		* f: la función que se aplicará a cada carácter.
			Esta función recibe dos argumentos: el índice del carácter y el carácter en sí,
			y debe devolver el resultado de aplicar alguna operación a esos argumentos.

	Devuelve:
		* Una nueva cadena de caracteres con los resultados de aplicar la función f a cada carácter de s.
*/
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
