#include <fcntl.h>
#include <stdio.h>
#include "../get_next_line.h"

int	main()
{
	int	f1 = open("a", O_RDONLY);
	int	f2 = open("a_nl", O_RDONLY);

	printf("a %s\n", get_next_line(f1));
	printf("a\n%s\n", get_next_line(f2));
}
