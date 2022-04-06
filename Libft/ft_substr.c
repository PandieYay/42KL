/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:56:16 by edlim             #+#    #+#             */
/*   Updated: 2022/04/06 16:56:17 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *substr;

	i = 0;
	substr = malloc(sizeof(char *) * len);
	if (!substr)
		return (NULL);
	while (i < len && s[start + i] != 0)
	{
		substr[i] = ((char *)s)[start + i];
		i++;
	}
	return (substr);
}
