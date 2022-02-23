/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:00:44 by edlim             #+#    #+#             */
/*   Updated: 2022/02/23 17:00:45 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc(max - min);
	temp = min;
	while (min < max)
	{
		range[i] = &min;
		min++;
		i++;
	}
	min = temp;
	return (max - min);
}

int main(void)
{
	int	*str;
	printf("%d", ft_ultimate_range(&str, 0, 5));
}