/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:53:56 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/13 18:16:18 by hdzulkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	tophorizontalaxis(int x);
void	middleaxis(int x);
void	bottomhorizontalaxis(int x);
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
		tophorizontalaxis(x);
		x = w;
		verticalaxis(x, y, w);
	}
}

void	tophorizontalaxis(int x)
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

void	bottomhorizontalaxis(int x)
{
	while (x > 0)
	{
		x--;
		if (x == 0)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
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
			ft_putchar('C');
			x--;
			bottomhorizontalaxis(x);
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
