#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (*(s + len) == (char) c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (0);
}
