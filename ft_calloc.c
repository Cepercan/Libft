#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
/*
	Reserva un bloque de memoria en el heap y lo pone a cero.
	Recibe:
		* count: El número de elementos a reservar.
		* size: El tamaño en bytes de cada elemento.

	Devuelve:
		* Un puntero al inicio del bloque de memoria reservado
		* NULL si la reserva falla.
 */
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}