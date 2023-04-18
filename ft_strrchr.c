/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:25:20 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:25:25 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
/*
	Busca la última aparición del carácter 'c' en la cadena de caracteres 'str'.

	Recibe:
	* str: la cadena de caracteres en la que se buscará el carácter.
	* c: el carácter que se busca en la cadena.

	Devuelve:
	* Un puntero a la última aparición del carácter en la cadena.
	* NULL si el carácter no se encuentra en la cadena.
*/
{
	int	i;

	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (char) c)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}
