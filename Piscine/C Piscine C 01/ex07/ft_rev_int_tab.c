/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:34:29 by edlim             #+#    #+#             */
/*   Updated: 2022/02/14 14:34:30 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	reverselength;
	int	temp;

	start = 0;
	reverselength = size - 1;
	while (start < reverselength)
	{
		temp = tab[start];
		tab[start] = tab[reverselength];
		tab[reverselength] = temp;
		reverselength--;
		start++;
	}
}
