/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:55:30 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 16:55:31 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	counter;

	dest_len = 0;
	src_len = 0;
	counter = 0;
	while (dest[dest_len] != 0)
		dest_len++;
	while (src[src_len] != 0)
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (counter < (size - dest_len - 1) && src[counter] != 0)
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = 0;
	return (dest_len + src_len);
}
