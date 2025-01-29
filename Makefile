SRCS = \
tester_get_next_line.c \

NAME = a.out
CFLAGS = -Wall -Wextra -Werror -g

all:		$(NAME)

$(NAME):	$(SRCS)
			cc $(CFLAGS) -I.. $(SRCS) ../get_next_line.c ../get_next_line_utils.c -D BUFFER_SIZE=-1

fclean:
			rm -f a.out

re:			fclean all
