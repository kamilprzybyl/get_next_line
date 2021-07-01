#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	int			ret;
	char		*buff;
	static char	*tmp;
	int			len;

	if (fd < 0 || line == NULL)
		return (-1);
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (tmp == NULL)
		tmp = ft_strdup("");
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(tmp, buff);
		if (ft_strchr(tmp, '\n'))
			break ;
	}
	len = 0;
	while (tmp[len] != '\n' && tmp[len] != '\0')
		len++;
	*line = ft_substr(tmp, 0, len);
	tmp = ft_strdup(&tmp[len + 1]);
	if (ret == 0 && ft_strlen(tmp) == 0 && ft_strlen(*line) == 0)
		return (0);
	return (1);
}