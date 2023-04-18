#include "libft.h"

int	ft_isalnum(int c)
/*
	Determina si un carácter es alfanumérico o no.

	Recibe:
		* c: El carácter que se va a verificar.

	Devuelve:
		* 1 si el carácter es alfanumérico.
		* 0 en caso contrario.
 */
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}