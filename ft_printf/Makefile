NAME = libftprintf.a
SRCS = ./ft_printf.c ./utils.c ./ft_itoa.c ./ft_unsigneditoa.c ./dectohex.c ./longdectohex.c
OBJS = ${SRCS:.c=.o}

%.o : %.c
	gcc -Wall -Wextra -Werror -I . -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all