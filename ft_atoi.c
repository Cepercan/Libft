#include "libft.h"

int	ft_atoi(const char *str)
/*
	Convierte una cadena de caracteres en un valor entero.

	Recibe:
		* str: La cadena que se va a convertir.

 	Devuelve:
		* El valor entero resultante de la conversión.
		* 0 en caso de que l 'str' no sea valido.
 */
{
	int			i;
	int			sign;
	long int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (result * sign);
}
