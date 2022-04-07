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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (start >= ft_strlen(s))
		len = 0;
	else if ((start + len) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != 0)
	{
		substr[i] = ((char *)s)[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
