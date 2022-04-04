/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:12:43 by edlim             #+#    #+#             */
/*   Updated: 2022/02/27 12:12:44 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

void	ft_putnbr(int nb)
{
	int	truenumber;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2,", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		truenumber = nb + 48;
		write(1, &truenumber, 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	checkdivmod(char op, char **argv)
{
	int	nb;

	nb = 0;
	if (op == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
		{
			nb = (ft_atoi(argv[1]) / ft_atoi(argv[3]));
			ft_putnbr(nb);
		}
	}
	else if (op == '%')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
		{
			nb = (ft_atoi(argv[1]) % ft_atoi(argv[3]));
			ft_putnbr(nb);
		}
	}
}

int	main(int argc, char **argv)
{
	char	op;
	int		nb;

	if (argc != 4)
		return (0);
	nb = 0;
	op = argv[2][0];
	if (op == '+')
		nb = (ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (op == '-')
		nb = (ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (op == '*')
		nb = (ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else
		checkdivmod(op, argv);
	if (op != '/' && op != '%')
		ft_putnbr(nb);
	write(1, "\n", 1);
}
