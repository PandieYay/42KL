/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:19:54 by edlim             #+#    #+#             */
/*   Updated: 2022/03/01 15:49:50 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 28676

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

void	puttail(char *str, int length)
{
	while (str[length] != 0)
	{
		write(1, &str[length], 1);
		length++;
	}
}

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

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		text;
	char	buffer[BUF_SIZE + 1];

	i = 3;
	if (argc < 4)
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
		puttail(buffer, (text - ft_atoi(argv[2])));
		write(1, "\n", 1);
		close(fd);
		i++;
	}
	return (0);
}
