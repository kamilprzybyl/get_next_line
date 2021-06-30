#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	int			ret;
	char		*buff;
	static char	*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	buff = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	if (tmp == NULL)
		tmp = strdup("");
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		printf("buff = %s\n", buff);
		tmp = ft_strjoin(tmp, buff);
		printf("tmp = %s\n", tmp);
		if (strchr(tmp, '\n'))
			break ;
	}
	int len = 0;
	while (tmp[len] != '\n' && tmp[len] != '\0')
		len++;
	*line = ft_strsub(tmp, 0, len);
	tmp = strdup(&tmp[len + 1]);
	printf("tmp = %s\n", tmp);
	if (ret == 0 && strlen(tmp) == 0)
		return (0);
	return (1);
}
