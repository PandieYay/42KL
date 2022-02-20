#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_put_base(int nb, char *base)
{
	int		len;

	len = 0;
	while (base[len])
		len++;
	if (nb >= len)
	{
		ft_put_base(nb / len, base);
		ft_put_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != 0)
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[z] != 0)
		{
			if (base[i] == base[z])
				return (1);
			z++;
		}
		i++;	
	}
	return (0);
}

void		ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) != 0)
		return;
	ft_put_base(nbr, base);
	
}

int main (void)
{
	ft_putnbr_base(20, "01");
	return (0);
}