/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:28:49 by edlim             #+#    #+#             */
/*   Updated: 2022/02/20 10:28:51 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//Gives the length of string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

//Displays the true number
void	ft_putnbr(int nb)
{
	int	truenumber;

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

//Displays string (for error)
void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		write(1, &str[counter], 1);
		counter++;
	}
}
