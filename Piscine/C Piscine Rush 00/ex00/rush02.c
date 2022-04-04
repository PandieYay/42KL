/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:00:43 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/13 17:32:58 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	print_char(int x, char right, char middle, char left);
void	main_function(int x, int y);

void	rush(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		main_function(x, y);
	}
}

void	main_function(x, y)
{
	int	counter_y;

	counter_y = 1;
	while (counter_y <= y)
	{
		if (counter_y == 1)
		{
			print_char(x, 'A', 'B', 'A');
		}
		else if (counter_y == y)
		{
			print_char(x, 'C', 'B', 'C');
		}
		else
		{
			print_char(x, 'B', ' ', 'B');
		}
		counter_y++;
		ft_putchar('\n');
	}
}

void	print_char(int x, char right, char middle, char left)
{
	int	counter_x;

	counter_x = 1;
	while (counter_x <= x)
	{
		if (counter_x == 1)
		{
			ft_putchar(right);
		}
		else if (counter_x == x)
		{
			ft_putchar(left);
		}
		else
		{
			ft_putchar(middle);
		}
		counter_x++;
	}
}
