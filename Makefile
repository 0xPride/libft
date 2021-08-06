CC = gcc
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -O
C_FILES = *.c
O_FILES = *.o
SRC=src
INCLUDES=includes
BONUS=bonus
TESTS=tests

all: $(NAME)

$(NAME): obj.o
	cd $(SRC); \
	ar rcs ../$(NAME) $(O_FILES)

so: obj.o
	cd $(SRC); \
	$(CC) $(O_FILES) -I ../$(INCLUDES) -shared -o ../libft.so 

obj.o:
	cd $(SRC); \
	$(CC) $(FLAGS) -I ../$(INCLUDES) -c $(C_FILES)

bonus:
	cd bonus; \
	$(CC) $(FLAGS) -I ../$(INCLUDES) -c $(C_FILES); \
	ar rcs ../$(NAME) $(O_FILES)

re: fclean all

fclean: clean
	rm -f $(NAME) libft.so

clean:
	cd $(SRC); \
	rm -f $(O_FILES) 
	rm -f main

build:
	cd $(TESTS); \
	$(CC) -I ../$(INCLUDES) -lbsd -o ../main main.c ../$(NAME)
