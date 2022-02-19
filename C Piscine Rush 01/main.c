/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:08:19 by edlim             #+#    #+#             */
/*   Updated: 2022/02/19 14:08:21 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int	main (int argc, char **argv)
{
	// int tab[4][4] = {
	// 	{0, 0, 0, 0},
	// 	{0, 0, 0, 0},
	// 	{0, 0, 0, 0},
	// 	{0, 0, 0, 0},	
	// };
	// int *entry;

	if (checknumber(argc, argv) == 1)
		return (0);
	printf("%s", argv[1]);
	// entry = get_numbers(argv[1]);
}

int	checknumber (int argc, char **argv)
{
	if (argc != 2)
		return (1);
	else if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int *get_numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(tab = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
