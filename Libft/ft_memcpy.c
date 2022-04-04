#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n > 0)
	{
		// dst = src;
		dst++;
		src++;
		n--;
	}
	return (dst);
}