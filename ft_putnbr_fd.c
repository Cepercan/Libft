/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-c <cperez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:17:28 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/13 12:11:17 by cperez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_long(long int nl, int fd);

void	ft_putnbr_fd(int nb, int fd)
{
	long int	nl;

	nl = nb;
	ft_putnbr_long(nl, fd);
}

void	ft_putnbr_long(long int nl, int fd)
/*
	Imprime un número entero en un file descriptor dado.

	Recibe:
		* nl:  El número a imprimir.
		* fd: El file descriptor donde se imprimirá el número.
*/
{
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = nl * (-1);
	}
	if (nl < 10)
	{
		nl = nl + '0';
		write(fd, &nl, 1);
	}
	else
	{
		ft_putnbr_long(nl / 10, fd);
		ft_putnbr_long(nl % 10, fd);
	}
}
