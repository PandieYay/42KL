/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:47:26 by edlim             #+#    #+#             */
/*   Updated: 2022/02/17 11:47:27 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[dest_len + counter] = 0;
	return (dest);
}
