#include "libft.h"

void	ft_bzero(void *str, size_t num)
/*
	Establece los primeros 'num' bytes del bloque de memoria apuntado por 'str' a cero.

	Recibe:
		* str: Puntero al bloque de memoria.
		* num: Número de bytes a establecer a cero.
 */
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)str;
	while (i < num)
	{
		aux[i] = 0;
		i++;
	}
	str = aux;
}