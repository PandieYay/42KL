srcs = ./srcs/*.c

libft.a:
	gcc -Wall -Wextra -Werror -c ${srcs}
	ar rc libft.a *.o
	mv *.o ./srcs

all: libft.a

clean:
	rm ./srcs/*.o

fclean: clean
	rm libft.a

re: fclean all