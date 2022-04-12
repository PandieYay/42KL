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
	char		*line;
	char		*buffer;
	int			text;
	int			start;
	int			k;
	static int	i = 0;
	static char *str;

	if (fd < 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	text = read(fd, buffer, BUFFER_SIZE);
	while (text > 0)
	{
		buffer[text] = '\0';
		str = ft_strdup(buffer);
		text = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	start = i;
	if (str[i] == '\0')
			return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			i++;
			break;
		}
		i++;
	}
	line = malloc(sizeof(char) * (i - start + 1));
	k = 0;
	while (str[start + k] != '\0')
	{
		line[k] = str[start + k];
		if (str[start + k] == '\n')
		{
			line[k] = str[start + k];
			k++;
			break;
		}
		k++;
	}
	line[k] = '\0';
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}