/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:43:28 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 18:43:29 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;
	char	*str1;
	char	*str2;

	counter = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (counter < n)
	{
		if (str1[counter] < str2[counter])
			return (1);
		else if (str1[counter] > str2[counter])
			return (-1);
		counter++;
	}
	return (0);
}
