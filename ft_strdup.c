/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:13:48 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:48:00 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/*
	Duplica una cadena de caracteres.

	Recibe:
		* s1: la cadena de caracteres a duplicar.

	Devuelve:
		* un puntero a la nueva cadena de caracteres duplicada
		* NULL si falla la reserva de memoria.
*/
{
	char	*d;
	char	*p_s1;
	size_t	i;

	p_s1 = (char *)s1;
	i = 0;
	d = ft_calloc (ft_strlen(p_s1) + 1, sizeof (char));
	if (!d)
		return (NULL);
	while (p_s1[i] != '\0')
	{
		d[i] = p_s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
