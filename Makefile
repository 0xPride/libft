CC = gcc
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
C_FILES = ft_memset.c ft_bzero.c ft_memcpy.c
O_FILES = ft_memset.o ft_bzero.o ft_memcpy.o

all: $(NAME)

$(NAME): obj.o
	ar -rcs $(NAME) $(O_FILES)

obj.o:
	$(CC) $(FLAGS) -c $(C_FILES)

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(O_FILES) main

build:
	$(CC) -o main main.c $(NAME)
