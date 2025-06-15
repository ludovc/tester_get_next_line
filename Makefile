CFLAGS = -Wall -Wextra -Werror -g

all:
	cc $(CFLAGS) tester.c ../get_next_line_bonus.c ../get_next_line_utils_bonus.c -o tester
	./tester

no_bonus:
	cc $(CFLAGS) tester.c ../get_next_line.c ../get_next_line_utils.c -o tester
	./tester
