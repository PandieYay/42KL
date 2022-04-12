#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*dest;
	int		i;

	i = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	dest = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}
	while (*s2 != 0)
	{
		dest[i] = *s2;
		s2++;
		i++;
	}
	dest[i] = 0;
	free(s1);
	return (dest);
}