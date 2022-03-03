/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:16:29 by edlim             #+#    #+#             */
/*   Updated: 2022/03/03 15:16:30 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 28676

void	ft_puthex(int hexnum)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexnum >= 16)
	{
		ft_puthex(hexnum / 16);
		ft_puthex(hexnum % 16);
	}
	else
		write(1, &base[hexnum], 1);
}

void	checkoffset(int hexcount)
{
	if (hexcount < 256)
	{
		write(1, "00000", 5);
		ft_puthex(hexcount);
	}
	else if (hexcount < 4096)
	{	
		write(1, "0000", 4);
		ft_puthex(hexcount);
	}
	else if (hexcount < 65536)
	{	
		write(1, "000", 3);
		ft_puthex(hexcount);
	}
	else if (hexcount < 1048576)
	{
		write(1, "00", 2);
		ft_puthex(hexcount);
	}
	else
		ft_puthex(hexcount);
}

void	hexdump(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	write(1, "0000000 ", 8);
	while (str[i] != 0)
	{
		k = 0;
		while (k < 16 && str[i] != 0)
		{
			if (str[i] <= 15)
				write(1, "0", 1);
			ft_puthex(str[i]);
			write(1, " ", 1);
			k++;
			i++;
		}
		write(1, "\n", 1);
		checkoffset(i);
		if (str[i] == 0)
			break ;
		write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		text;
	char	buffer[BUF_SIZE + 1];

	i = 1;
	if (argc < 2)
		return (1);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			return (1);
		}
		text = read(fd, buffer, BUF_SIZE);
		buffer[text] = '\0';
		hexdump(buffer);
		close(fd);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
