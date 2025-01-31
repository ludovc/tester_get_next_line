#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);

void	test()
{
	int		fd;
	char	*line;

	fd = open("test/file_sbagliato", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
}

int	main()
{
	int		fd;
	char	*line;

	fd = open("test/file_due_linee", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(-1);
	printf("%s", line);
	//free(line);
}
