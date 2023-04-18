/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:11:49 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 13:01:53 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char s, int fd)
/*
	Escribe un carácter en un descriptor de archivo dado.

	Recibe:
		* s: El carácter a escribir.
		* fd: El descriptor de archivo en el que escribir.
*/
{
	write(fd, &s, 1);
}
