/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:28:38 by cperez-c          #+#    #+#             */
/*   Updated: 2023/05/17 14:35:40 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_nbr(long int n)
/*
	Determina la cantidad de dígitos que tiene un número entero.

	Recibe:
		* n: El número entero a analizar.

	Devuelve:
		* Un valor entero que representa la cantidad de dígitos del número.
 */
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
/*
	Convierte un número entero en una cadena de caracteres.

	Recibe:
		* n: El número entero a convertir.

	Devuelve:
		* Un puntero a una cadena de caracteres que representa el número.
		* NULL si la reserva de memoria falla
 */
{
	char		*result;
	int			len;
	long int	nbr;

	len = len_nbr(n);
	result = malloc(len + 1);
	nbr = n;
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	result[len] = '\0';
	if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		result[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (result);
}
