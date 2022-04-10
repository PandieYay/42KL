/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:40:07 by edlim             #+#    #+#             */
/*   Updated: 2022/04/10 15:40:07 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	int		i;
	// char	*nextline;
	char	buffer[BUFFER_SIZE + 1];

	if (!fd)
		return (NULL);
	i = read(fd, buffer, BUFFER_SIZE);
	printf("%d", i);
	return (0);
}

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
}