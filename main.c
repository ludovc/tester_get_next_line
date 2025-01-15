#include "../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void	caso_normale()
{
	int fd = open("./file", O_RDONLY);
	char *s;

	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	close(fd);
}

void	invalid_fd()
{
	get_next_line(3);
}

void	file_vuoto()
{
	int fd = open("./file_vuoto", O_RDONLY);
	char *s;

	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	close(fd);
}

void	no_nl()
{
	int fd = open("./no_nl", O_RDONLY);
	char *s;

	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	close(fd);
}

void	just_nl()
{
	int fd = open("./just_nl", O_RDONLY);
	char *s;

	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	close(fd);
}

void	just_a()
{
	int fd = open("./41_no_nl", O_RDONLY);
	char *s;

	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	close(fd);
}

void	altro_caso()
{
	int fd = open("./t", O_RDONLY);
	char *s;

	while ((s = get_next_line(fd)))
	{
		printf("%s", s);
		free(s);
	}
	close(fd);
}

int	main()
{
	//caso_normale();
	//invalid_fd();
	//file_vuoto();
	//no_nl();
	//just_nl();
	//just_a();
	altro_caso();
}
