/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:13:17 by cperez-c          #+#    #+#             */
/*   Updated: 2023/03/07 18:04:29 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int fd)
/*
	Imprime una cadena en un archivo descriptor de archivo específico.

	Recibe:
	* s:  un puntero a la cadena a imprimir.
	* fd: el descriptor de archivo donde se imprimirá la cadena.
 */
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
