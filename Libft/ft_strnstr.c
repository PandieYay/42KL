/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:42:03 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 18:42:05 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, char *to_find, size_t len)
{
	size_t	counter;
	size_t	to_find_c;

	counter = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[counter] != 0 && counter < len)
	{
		to_find_c = 0;
		while ((counter + to_find_c) < len
			&& (str[counter + to_find_c] == to_find[to_find_c]))
		{
			if (to_find[to_find_c + 1] == 0)
				return (&((char *)str)[counter]);
			else
				to_find_c++;
		}
		counter++;
	}
	return (0);
}
