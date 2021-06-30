#include "get_next_line.h"

int	main()
{
	char  *line;
	int   fd1;
	// int	ret;

	fd1 = open("test.txt", O_RDONLY);
	while (get_next_line(fd1, &line))
		printf("[%s]", line);
	// ret = get_next_line(fd1, &line);
	// printf("[%s]", line);
	// printf("ret = %d\n", ret);
	// ret = get_next_line(fd1, &line);
	// printf("[%s]", line);
	// printf("ret = %d\n", ret);
	return (0);
}