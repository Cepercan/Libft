#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int main(void)
{
    char b[0xF] = "nyan !";
    printf("%zu",strlcat(((void *)0), b, 0));
    //printf("%zu",ft_strlcat(((void *)0), b, 0));
    return(0);
}
// FT_ATOI -> int	ft_atoi(const char *str){}//
/*
int main()
{
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("-456"));
    printf("%d\n", ft_atoi("    789"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("    +987"));
    printf("%d\n", ft_atoi("    -12a34"));
    return 0;
}
*/

// FT_BZERO -> void	ft_bzero(void *str, size_t num){}//
/*
int main()
{
    char str1[10] = "Hello";
    ft_bzero(str1, 3);
    printf("str1 después de ft_bzero: %s\n", str1);

    char str2[10] = "World";
    ft_bzero(str2, 5);
    printf("str2 después de ft_bzero: %s\n", str2);

    return 0;
}
*/

// FT_CALLOC -> //
/*

*/

// FT_ISALNUM -> int ft_isalnum(int c){}//
/*
int main()
{
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('B'));
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", ft_isalnum('$'));
    return 0;
}
*/

// FT_ISALPHA -> int ft_isalpha(int c){}//
/*
int main()
{
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha('B'));
    printf("%d\n", ft_isalpha('5'));
    printf("%d\n", ft_isalpha('$'));
    return 0;
}
*/

// FT_ISASCII -> int ft_isascii(int c){}//
/*
int main()
{
    printf("%d\n", ft_isascii('a'));
    printf("%d\n", ft_isascii('B'));
    printf("%d\n", ft_isascii('€'));
    printf("%d\n", ft_isascii('$'));
    return 0;
}
*/

// FT_ISDIGIT -> int ft_isdigit(int c){}//
/*
int main()
{
    printf("%d\n", ft_isdigit('5'));
    printf("%d\n", ft_isdigit('0'));
    printf("%d\n", ft_isdigit('A'));
    printf("%d\n", ft_isdigit('$'));
    return 0;
}
*/

// FT_ISPRINT -> int	ft_isprint(int c){}//
/*
int main()
{
    printf("%d\n", ft_isprint('5'));
    printf("%d\n", ft_isprint('0'));
    printf("%d\n", ft_isprint('\0'));
    printf("%d\n", ft_isprint('\t'));
    return 0;
}
*/

// FT_ITOA -> char	*ft_itoa(int n){}//
/*
int main()
{
    int n = -123;
    char *s = ft_itoa(n);
    printf("El número %d se convierte en la cadena \"%s\".\n", n, s);
    free(s);

    n = 987654321;
    s = ft_itoa(n);
    printf("El número %d se convierte en la cadena \"%s\".\n", n, s);
    free(s);

    return 0;
}
*/

// FT_MEMCHR -> void	*ft_memchr(const void *s, int c, size_t n){}//
/*
int main()
{
    char s[] = "Hello, world!";
    char *p = ft_memchr(s, 'w', strlen(s));
    if (p != NULL)
        printf("Se encontró el carácter en la posición %ld.\n", p - s);
    else
        printf("No se encontró el carácter.\n");

    p = ft_memchr(s, 'x', strlen(s));
    if (p != NULL)
        printf("Se encontró el carácter en la posición %ld.\n", p - s);
    else
        printf("No se encontró el carácter.\n");

    return 0;
}
*/

// FT_MEMCMP -> int	ft_memcmp(const void *s1, const void *s2, size_t n)//
/*
int main()
{
    char s1[] = "Hello, world!";
    char s2[] = "hello, world!";

    int result = ft_memcmp(s1, s2, 13);
    if (result > 0)
        printf("'%s' es mayor que '%s'.\n", s1, s2);
    else if (result < 0)
        printf("'%s' es menor que '%s'.\n", s1, s2);
    else
        printf("'%s' y '%s' son iguales.\n", s1, s2);

    return 0;
}
*/

// FT_MEMCPY -> void	*ft_memcpy(void *dst, const void *src, size_t n){}//
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];

    printf("Original strings:\n");
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);

    // Copia los primeros 7 caracteres de src en dst
    ft_memcpy(dst, src, 7);

    printf("After ft_memcpy:\n");
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);

    return 0;
}
*/

// FT_MEMMOVE -> void	*ft_memmove(void *str1, const void *str2, size_t n){}//
/*
int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "123456";
    char *src = str1;
    char *dst = str2;

    printf("Original strings:\n");
    printf("src: %s\n", str1);
    printf("dst: %s\n", str2);

    ft_memmove(str2, str1, 3);

    printf("After ft_memmove:\n");
    printf("src: %s\n", str1);
    printf("dst: %s\n", str2);

    return 0;
}
*/

// FT_MEMSET -> void	*ft_memset(void *b, int c, size_t len){}//
/*
int	main(void)
{
	char	str[] = "hello world";
	size_t	len = ft_strlen(str);

	printf("Original string: %s\n", str);

	// Establecer los primeros 5 caracteres en 'a'
	ft_memset(str, 'a', 5);

	printf("After ft_memset: %s\n", str);

	return (0);
}
*/

// FT_PUTCHAR_FD -> void	ft_putchar_fd(char s, int fd){}//
/*
int	main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('B', 1);
	ft_putchar_fd('C', 1);

	return (0);
}
*/

// FT_PUTENDL_FD -> void	ft_putendl_fd(char *s, int fd){}//
/*
int	main(void)
{
	ft_putendl_fd("¡Hola, mundo!", 1);
	return (0);
}
*/

// FT_PUTNBR_FD -> void	ft_putnbr_fd(int n, int fd){}//
/*
int	main(void)
{

    ft_putnbr_fd(42, 1);
    return (0);
}
*/

// FT_PUTSTR_FD -> void	ft_putstr_fd(char	*s, int fd){} //
/*
int main(void)
{
	char *s = "Hello, world!";

	ft_putstr_fd(s, fd);

	return 0;
}
*/

// FT_SPLIT -> char **ft_split(const char *str, char c){}//
/*
int	main(void)
{
    char	**str_arr;
    char	*str = "   Hola,  amigos! Cómo están?  ";
    char	delimiter = ' ';

    str_arr = ft_split(str, delimiter);
    if (!str_arr)
    {
        printf("Error: ft_split returned NULL\n");
        return (1);
    }

    for (int i = 0; str_arr[i]; i++)
        printf("%s\n", str_arr[i]);

    free_split(str_arr);

    return (0);
}
*/

// FT_STRCHR -> char	*ft_strchr(const char *str, int c){}//
/*
*/

// FT_STRDUP -> char	*ft_strdup(const char *s1){}//
/*
int	main(void)
{
	char *s1 = "Hello, world!";
	char *s2;

	s2 = ft_strdup(s1);
	if (s2 == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);

	free(s2);

	return (0);
}
*/

// FT_STRJOIN -> char	*ft_strjoin(char const *s1, char const *s2);//
/*
int main(void)
{
    char *s1 = "Hola";
    char *s2 = " mundo!";
    char *result;

    result = ft_strjoin(s1, s2);
    printf("resultado: %s\n", result)
    free(result);
    return (0);
}
*/

// FT_STRLCAT -> size_t	ft_strlcat(char *dst, const char *src, size_t size)//
/*
int main(void)
{
    char dest[20] = "Hola ";
    char *src = "mundo!";
    size_t n = 20;

    printf("Antes de ft_strlcat: %s\n", dest);
    ft_strlcat(dest, src, n);
    printf("Después de ft_strlcat: %s\n", dest);

    return 0;
}
*/

// FT_STRLCPY -> size_t	ft_strlcpy(char *dst, const char *src, size_t size);//
/*
int main(void)
{
    char str1[6] = "hello";
    char str2[6] = "world";
    size_t size;
    size = ft_strlcpy(str1, str2, 3);
    printf("dst: %s \n", str1);
    print("size: %zu \n", size);

    return (0);
*/

// FT_STRLEN -> size_t	ft_strlen(const char *str);//
/*
int main() {
	const char *cadena = "Hola, mundo!";
	size_t longitud = ft_strlen(cadena);
	printf("La longitud de la cadena \"%s\" es: %zu\n", cadena, longitud);
	return 0;
}
*/

// //
/*
char cambiar_caracter(unsigned int indice, char c)
{
	if (indice % 2 == 0)
		return c - 32; // Si el índice es par, convierte el carácter a mayúscula
	else
		return c + 32; // Si el índice es impar, convierte el carácter a minúscula
}

int main(void)
{
	char *original = "Hola, mundo!";
	char *nueva_cadena = ft_strmapi(original, cambiar_caracter);

	printf("Cadena original: %s\n", original);
	printf("Nueva cadena: %s\n", nueva_cadena);
	free(nueva_cadena);

	return (0);
}
*/

//FT_STRNCMP -> int	ft_strncmp(const char *s1, const char *s2, size_t n)//
/*
int main(void)
{
	char *s1 = "hola mundo";
	char *s2 = "hola amigos";

	if (ft_strncmp(s1, s2, 4) == 0)
		printf("Las primeras n letras son iguales en ambas cadenas.\n");
	else
		printf("Las primeras n letras no son iguales en ambas cadenas.\n");

	return (0);
}
*/

//FT_STRNSTR -> char	*ft_strnstr(const char *haystack, const char *needle, size_t len)//
/*
int main(void)
{
	char *s1 = "Hola, mundo! ¿Cómo estás?";
	char *s2 = "mund";
	char *resultado = ft_strnstr(s1, s2, strlen(s1));

	if (resultado == NULL)
		printf("No se encontró la subcadena '%s' en la cadena principal.\n", s2);
	else
		printf("La subcadena '%s' se encontró en la posición %ld de la cadena principal.\n", s2, resultado - s1);

	return (0);
}
*/

// /FT_STRRCHR -> char	*ft_strrchr(const char *str, int c);//
/*
int main(void)
{
	char *s = "Hola, mundo!";
	char c = 'l';
	char *resultado = ft_strrchr(s, c);

	if (resultado == NULL)
		printf("No se encontró el carácter '%c' en la cadena de caracteres.\n", c);
	else
		printf("El carácter '%c' se encontró en la posición %ld de la cadena de caracteres.\n", c, resultado - s);

	return (0);
}
*/

// FT_STRTRIM -> char	*ft_strtrim(char const *s1, char const *set)//
/*
int main(void)
{
	char *s = "   Hola, mundo! ¿Cómo estás?   ";
	char *set = " ?";
	char *resultado = ft_strtrim(s, set);

	if (resultado == NULL)
		printf("No se pudo reservar memoria para la nueva cadena de caracteres.\n");
	else
		printf("La nueva cadena de caracteres es '%s'.\n", resultado);

	free(resultado);

	return (0);
}
*/


// FT_SUBSTR -> char	*ft_substr(char const *s, unsigned int start, size_t len)//
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


// FT_TOLOWER -> int	ft_tolower(int c)//
/*
int main(void)
{
	char c = 'H';
	char resultado = ft_tolower(c);

	printf(%c\n", resultado);
	
	return (0);
}
*/


//FT_TOUPPER -> int	ft_toupper(int c)//
/*
int main(void)
{
	char c = 'h';
	char resultado = ft_toupper(c);

	printf("%c \n", resultado);

	return (0);
}
*/
