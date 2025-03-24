CFLAGS = -Wall -Wextra -Werror -g

all:
	cc $(CFLAGS) tester.c ../get_next_line.c ../get_next_line_utils.c -o tester
	./tester
