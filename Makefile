all:
	cc main.c ../get_next_line.c ../get_next_line_utils.c -g -D BUFFER_SIZE=1
