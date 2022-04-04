/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:16 by edlim             #+#    #+#             */
/*   Updated: 2022/02/14 15:33:17 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	reverselength;
	int	temp;
	int	j;
	int	min_idx;

	start = 0;
	reverselength = size - 1;
	while (start < reverselength)
	{
		min_idx = start;
		j = start + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = tab[min_idx];
		tab[min_idx] = tab[start];
		tab[start] = temp;
		start++;
	}
}
