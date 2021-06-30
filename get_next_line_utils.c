#include "get_next_line.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(*str) * size + 1);
	if (str == NULL)
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = strlen(s1) + strlen(s2);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (s == NULL)
		return (NULL);
	subs = ft_strnew(len);
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}