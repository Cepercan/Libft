/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:09:31 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 12:09:31 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
/*
	Establece los primeros n bytes del bloque de memoria a los valores del carácter c.

	Recibe:
	* b: un puntero al bloque de memoria a establecer.
	* c: el carácter a establecer.
	* len: la cantidad de bytes a establecer.

	Devuelve:
		* un puntero al bloque de memoria b.
*/
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
