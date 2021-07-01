#include "get_next_line.h"

int	main()
{
	char  *line;
	int   fd1;

	fd1 = open("test.txt", O_RDONLY);
	while (get_next_line(fd1, &line))
		printf("[%s]", line);
	return (0);
}