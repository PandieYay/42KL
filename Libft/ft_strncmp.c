/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:36:42 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 11:36:42 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] < s2[counter])
			return (-1);
		else if (s1[counter] > s2[counter])
			return (1);
		counter++;
	}
	return (0);
}
