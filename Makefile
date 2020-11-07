

NAME = libft.a
FILES = *.c
OBJECTS = *.o
HEADERS = libft.h
all: $(NAME)
$(NAME):
	gcc -c -Wall -Werror -Wextra $(FILES) -I $(HEADERS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a
clean:
	/bin/rm -f $(OBJECTS)
fclean: clean
	 /bin/rm -f $(NAME) test
re: fclean all
