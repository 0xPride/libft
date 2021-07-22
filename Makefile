CC = gcc
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -O
C_FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_strlen.c
O_FILES = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_strlen.o

all: $(NAME)

$(NAME): obj.o
	ar -rcs $(NAME) $(O_FILES)

so: obj.o
	$(CC) $(O_FILES) -shared -o libft.so 

obj.o:
	$(CC) $(FLAGS) -c $(C_FILES)

re: fclean all

fclean: clean
	rm -f $(NAME) libft.so

clean:
	rm -f $(O_FILES) main

build:
	$(CC) -o main main.c $(NAME)
