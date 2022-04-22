NAME = libft.a
CLIENT = client
SERVER = server
SRCS = Libft/ft_atoi.c Libft/ft_putstr.c
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror

%.o : %.c
	gcc ${FLAGS} -I . -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME} ${CLIENT} ${SERVER}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all