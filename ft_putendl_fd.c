/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:15:04 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/15 18:24:23 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
/*
	Imprime una cadena seguida de un carácter de nueva línea en el descriptor de archivo especificado.

	Recibe:
	* s:  La cadena a imprimir.
	* fd: El descriptor de archivo donde se escribirá la cadena.
*/
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);

}
