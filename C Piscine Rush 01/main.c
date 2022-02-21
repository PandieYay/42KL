/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:08:19 by edlim             #+#    #+#             */
/*   Updated: 2022/02/19 14:08:21 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		solve(int *tab[4], int entry[16], int pos);

void	display_solution(int *tab[4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
	}
}

int	checknumber(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else if (ft_strlen(argv[1]) != 31)
		return (0);
	return (1);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
			if (str[i] >= '1' && str[i] <= '4')
				tab[j++] = str[i] - '0';
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	*tab[4];
	int	i;
	int	*entry;

	i = -1;
	while (i++ < 4)
		tab[i] = (int *)malloc(sizeof(int) * 4);
	entry = get_numbers(argv[1]);
	if (checknumber(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (entry == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
