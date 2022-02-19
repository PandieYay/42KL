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
#include "functions.h"

int checknumber (int argc, char **argv);

int	main (int argc, char **argv)
{
	// printf("%d", argc);
	if (checknumber(argc, argv) == 1)
		return (0);
	printf("%s", argv[1]);
}

int checknumber (int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

// int check(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (1);
// 	if (ft_strlen(av[1]) != 31)
// 		return (1);
// 	return (0);
// }