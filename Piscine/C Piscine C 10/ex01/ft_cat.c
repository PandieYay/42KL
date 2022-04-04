/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:19:54 by edlim             #+#    #+#             */
/*   Updated: 2022/03/01 15:19:55 by edlim            ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		text;
	char	buffer[BUF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
			return (1);
		}
		text = read(fd, buffer, BUF_SIZE);
		buffer[text] = '\0';
		ft_putstr(buffer);
		close(fd);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
