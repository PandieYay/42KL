/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjun-yu <cjun-yu@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:53:56 by cjun-yu           #+#    #+#             */
/*   Updated: 2022/02/13 12:59:42 by cjun-yu          ###   ########.fr       */
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
		ft_putchar('/');
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
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('*');
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
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('\\');
			x--;
			bottomhorizontalaxis(x);
		}
		else
		{
			ft_putchar('\n');
			ft_putchar('*');
			x--;
			middleaxis(x);
			x = w;
		}
	}
}
