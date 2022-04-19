NAME = libftprintf.a
SRCS = ./ft_printf.c ./utils.c ./ft_itoa.c ./ft_usitoa.c
BONUS_SRCS = 
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

%.o : %.c
	gcc -Wall -Wextra -Werror -I . -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus: ${BONUS_OBJS}
	ar rcs ${NAME} ${BONUS_OBJS}

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all