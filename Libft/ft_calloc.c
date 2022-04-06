/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:43:04 by edlim             #+#    #+#             */
/*   Updated: 2022/04/05 18:43:05 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count == 0 || size == 0)
		return (NULL);
	str = malloc(size * count);
	if (!str)
		return (NULL);
	return (str);
}
