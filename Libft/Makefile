NAME = libft.a
SRCS = ./ft_isdigit.c ./ft_isalpha.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_toupper.c ./ft_tolower.c \
./ft_strlen.c ./ft_strchr.c ./ft_strrchr.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c
OBJS = ${SRCS:.c=.o}

.c.o:
		gcc -Wall -Wextra -Werror -I . -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all