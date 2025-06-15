#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd);

int	main()
{
	int		fd;
	char	*res;

	fd = open("file", O_RDONLY);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	close(fd);
}
