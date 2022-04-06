#include "libft.h"

int	countnb(int nb)
{
	int	count;

	if (nb == -2147483648)
	{
		count++;
		count++;
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(sizeof(char) * countnb(n));
	return (str);
}
