/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:19:59 by edlim             #+#    #+#             */
/*   Updated: 2022/02/23 10:20:20 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_sort_params(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] == str2[i])
		i++;
	if (str[i] > str2[i])
		return (1);
	return (0);
}

void	printarray(int max, char **index)
{
	int	i;

	i = 1;
	while (i < max)
	{
		ft_putstr(index[i]);
		write(1, "\n", 1);
		i++;
	}
}

//argc = 5, argv[0-4]
int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_sort_params(argv[j], argv[j + 1]) == 1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	printarray(argc, argv);
	return (0);
}
