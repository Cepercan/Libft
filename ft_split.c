/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celiaperezcandela <celiaperezcandela@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:11:42 by cperez-c          #+#    #+#             */
/*   Updated: 2023/05/17 14:36:42 by celiaperezc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next_delimiter(char const *str, char c, int i)
/*
	Encuentra el índice del siguiente delimitador en una cadena.

	Recibe:
		* str: la cadena en la que buscar.
		* c: el delimitador a buscar.
		* i: la posición a partir de la cual buscar.

	Devuelve:
		* El índice del siguiente delimitador en la cadena, 
		* el índice del fin de a cadena si no se encuentra otro delimitador.
*/
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	next_word(char const *str, char c, int i)
/*
	Encuentra el índice del próximo carácter que no es el delimitador 'c'.

	Recibe:
		* str: un puntero a la cadena de caracteres a analizar.
		* c: el delimitador a buscar.
		* i: el índice inicial para buscar.
	Devuelve:
		* el índice del próximo carácter que no es el delimitador 'c'.
*/
{
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static int	count_words(const char *str, char c)
/*
	Cuenta el número de palabras en una cadena, separadas por un delimitador dado.

	Recibe:
		* str: la cadena de entrada.
		* c: el delimitador utilizado para separar las palabras.

	Devuelve:
		* el número de palabras en la cadena.
*/
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			i = next_delimiter(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

static void	free_split(char **str)
/*
	Libera la memoria asignada a un array de strings.

	Recibe:
		* str: el array de strings.
*/
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(const char *str, char c)
/*
	Divide una cadena en un array de subcadenas utilizando un delimitador dado.

	Recibe:
		* str la cadena a dividir.
		* c el delimitador utilizado para separar las subcadenas.

	Devuelve:
		* un puntero al array de subcadenas resultante
		* NULL si falla.
*/
{
	char	**res;
	int		wrds;
	int		i;
	int		j;

	wrds = count_words(str, c);
	res = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (!str || !res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wrds)
	{
		i = next_word(str, c, i);
		res[j] = ft_substr(str, i, next_delimiter(str, c, i) - i);
		if (!res[j])
		{
			free_split(res);
			return (NULL);
		}
		i = next_delimiter(str, c, i);
		j++;
	}
	res[j] = NULL;
	return (res);
}
