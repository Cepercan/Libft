/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:15:13 by cperez-c          #+#    #+#             */
/*   Updated: 2023/02/22 19:09:31 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
/*
	Crea una nueva cadena a partir de la cadena 's', comenzando en la posición 'start'
	y con una longitud máxima de 'len'.

	Recibe:
		* s: la cadena de caracteres de la que se quiere crear una subcadena.
		* start: la posición inicial de la subcadena.
		* len: la longitud máxima de la subcadena.

	Devuelve:
		* Un puntero a la nueva cadena de caracteres creada.
		* NULL si no se pudo reservar memoria para la nueva cadena.
*/
{
	size_t			i;
	char			*result;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len - start < len)
		len = s_len - start;
	if (s_len < start)
		return (ft_strdup(""));
	result = ft_calloc(len + 1, sizeof (char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main()
{
    char src[] = "substr ";
 
    int m = 3;
    int n = 12;
 
    char	*dest = substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
}
*/