# Variables
LIB = ar rcs	# Comando para crear una biblioteca
RM = rm -f		# Comando para eliminar archivos

CC = gcc	# Compilador de C
CCFLAGS = -Wall -Wextra -Werror		# Flags de compilador

INCLUDE = libft.h	# Archivo de cabecera
NAME = libft.a		# Nombre de la biblioteca

# Archivos fuente
SRC =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Funciones adicionales
BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUSOBJ = $(BONUSSRC:.c=.o)

# Reglas de construcción
all: $(NAME)	# Compila la biblioteca

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)	
# Crea la biblioteca

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)
# Crea la versión "bonus" de la biblioteca

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
# Compila un archivo fuente en un archivo objeto

clean:
	$(RM) $(OBJ) $(BONUSOBJ)
# Elimina los archivos objeto

fclean: clean
	$(RM) $(NAME)
# Elimina la biblioteca

re: fclean all	# Hace una compilación limpia de la biblioteca

rebonus: fclean bonus	# Hace una compilación limpia de la versión "bonus" de la biblioteca