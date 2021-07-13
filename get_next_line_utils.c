#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return ((void *)0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1[j] != '\0')
	{
		new[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (!dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (int)dstsize - 1)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	if (dstsize != 0)
		((char *)dst)[i] = '\0';
	return (ft_strlen(src));
}
