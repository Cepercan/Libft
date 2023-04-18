/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:18:35 by celiaperezc       #+#    #+#             */
/*   Updated: 2023/03/07 18:10:11 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/*
	Busca la primera aparición de la subcadena 'needle' en la cadena 'haystack', pero solo hasta los primeros 'len' caracteres.

	Recibe:
	* haystack: la cadena principal en la que se buscará la subcadena.
	* needle: la subcadena que se busca en la cadena principal.
	* len: el número máximo de caracteres que se buscarán.

	Devuelve:
	* Un puntero a la primera aparición de la subcadena en la cadena principal.
	* NULL si la subcadena no se encuentra en la cadena principal.
*/
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle || needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
