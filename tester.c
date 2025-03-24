#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd);

int	main()
{
	int		fd;
	char	*res;

	fd = open("empty", O_RDONLY);
	res = get_next_line(fd);
	printf("%s\n", res);
	close(fd);
	free(res);
}
