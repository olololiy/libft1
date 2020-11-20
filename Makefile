FLAG = -Wall -Wextra -Werror
INC = libft.h
NAME = libft.a
SRC = ft_strlen.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memset.c  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c  ft_substr.c ft_strjoin.c


OBJ = $(SRC:.c=.o)
OBJB = $(BONUS:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
%.o: %.c
	gcc $(FLAG) -I $(INC) -c $< -o $@
clean:
	rm -f $(OBJ) $(OBJB)
	echo "OBJ & OBJB destroyed"
fclean: clean
	rm -f $(NAME)
	echo "$(NAME) destroyed"
re: fclean all
.PHONY: all, clean, fclean, re
