/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:59:14 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 15:39:15 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
	{
		while (src[counter] != 0)
			counter++;
		return (counter);
	}
	while (counter < size - 1 && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	if (counter < size)
		dest[counter] = '\0';
	while (src[counter] != '\0')
		counter++;
	return (counter);
}
