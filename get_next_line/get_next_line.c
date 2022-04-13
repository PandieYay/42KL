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

static void	check(char **str)
{
	if (*str)
		free(*str);
	*str = NULL;
}

static int	find_nl(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

static char	*read_file(char *buffer, char *str, int i, int fd)
{
	int	text;

	text = 1;
	while (text > 0 && ft_strchr(str, i, '\n') == 0)
	{
		text = read(fd, buffer, BUFFER_SIZE);
		if (text == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[text] = '\0';
		str = ft_strjoin(str, buffer);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	int			start;
	static int	i = 0;
	static char	*str;

	if (fd < 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	str = read_file(buffer, str, i, fd);
	if (!str)
		return (NULL);
	check(&buffer);
	start = i;
	if (!str[i])
	{
		check(&str);
		return (NULL);
	}
	i = find_nl(str, i);
	return (ft_substr(str, start, (i - start)));
}

/* int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}
*/