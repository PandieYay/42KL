/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:30:10 by edlim             #+#    #+#             */
/*   Updated: 2022/02/27 11:30:11 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sortlefttoright(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	sortrighttoleft(int *tab, int length, int (*f)(int, int))
{
	length = length - 1;
	while (length > 0)
	{
		if ((*f)(tab[length], tab[length - 1]) > 0)
			return (0);
		length--;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (sortlefttoright(tab, length, f) == 1)
		return (1);
	else if (sortrighttoleft(tab, length, f) == 1)
		return (1);
	return (0);
}
