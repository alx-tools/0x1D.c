NAME	= liblistint.a

SRC	= create_list.c \
	print_list.c \
	free_list.c

OBJ	= $(SRC:.c=.o)

CC	= gcc
CFLAGS	= -I./ -Wall -Wextra -Werror -pedantic

all	: $(NAME)

$(NAME)	: $(OBJ)
	ar rc $@ $(OBJ)
	ranlib $@

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
