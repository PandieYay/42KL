/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdzulkar <hdzulkar@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:36:50 by hdzulkar          #+#    #+#             */
/*   Updated: 2022/02/13 18:01:11 by hdzulkar         ###   ########.fr       */
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
		ft_putchar('o');
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
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
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
			ft_putchar('|');
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
			ft_putchar('o');
			x--;
			horizontalaxis(x);
		}
		else
		{
			ft_putchar('\n');
			ft_putchar('|');
			x--;
			middleaxis(x);
			x = w;
		}
	}
}
