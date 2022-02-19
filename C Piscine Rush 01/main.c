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

int checknumber (int argc, char **argv);

int	main (int argc, char **argv)
{
	printf("%d", argc);
	printf("%s", argv[1]);
	checknumber(argc, argv);
}

int checknumber (int argc, char **argv)
{
	if (argc == 0)
		return(0);
	printf("%s", argv[1]);
	return(0);
}

// int check(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (1);
// 	if (ft_strlen(av[1]) != 31)
// 		return (1);
// 	return (0);
// }