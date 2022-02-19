/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:46:24 by edlim             #+#    #+#             */
/*   Updated: 2022/02/17 15:46:25 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	counter;

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
