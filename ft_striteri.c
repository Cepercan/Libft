/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:11:23 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/01 19:14:52 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
/*
	Aplica la función 'f' a cada carácter de la cadena 's'
	pasando su índice como primer argumento.

	Recibe:
		* s: la cadena de caracteres a la cual aplicar la función.
		* f: la función a aplicar a cada carácter de la cadena.
*/
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
