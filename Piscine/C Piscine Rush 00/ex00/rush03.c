/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:54:09 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/13 14:35:53 by cjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	horizontalaxis(int x);
void	middleaxis(int x);
void	verticalaxis(int x, int y, int w);

void	rush(int x, int y)
{
	int	w;

	w = x;
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		x--;
		y--;
		horizontalaxis(x);
		x = w;
		verticalaxis(x, y, w);
	}
}

void	horizontalaxis(int x)
{
	while (x > 0)
	{
		x--;
		if (x == 0)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	middleaxis(int x)
{
	while (x > 0)
	{
		x--;
		if (x == 0)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	verticalaxis(int x, int y, int w)
{
	while (y > 0)
	{
		y--;
		if (y == 0)
		{
			ft_putchar('\n');
			x = w;
			ft_putchar('A');
			x--;
			horizontalaxis(x);
		}
		else
		{
			ft_putchar('\n');
			ft_putchar('B');
			x--;
			middleaxis(x);
			x = w;
		}
	}
}
