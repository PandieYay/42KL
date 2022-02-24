/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:41:16 by edlim             #+#    #+#             */
/*   Updated: 2022/02/24 11:41:17 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	counter;

	dest_len = 0;
	counter = 0;
	while (dest[dest_len] != 0)
		dest_len++;
	while (src[counter] != 0)
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(size * sizeof(char));
	if (dest == 0)
		return (0);
	if (size <= 0)
		return (dest);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
