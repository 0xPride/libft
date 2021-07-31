CC = gcc
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -O
C_FILES = *.c
O_FILES = *.o

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
	$(CC) -lbsd -o main main.c $(NAME)
