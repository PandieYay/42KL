/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:50:46 by edlim             #+#    #+#             */
/*   Updated: 2022/04/06 18:50:47 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	fronttrim(char const *s1, char const *set)
{
	int	i;
	int	k;
	int	true;

	i = 0;
	while (s1[i] != 0)
	{
		true = 0;
		k = 0;
		while (set[k] != 0)
		{
			if (s1[i] == set[k])
				true = 1;
			k++;
		}
		if (true != 1)
			break ;
		i++;
	}
	return (i);
}

int	backtrim(char const *s1, char const *set)
{
	int	i;
	int	k;
	int	true;

	i = ft_strlen(s1) - 1;
	while (s1[i] != 0)
	{
		true = 0;
		k = 0;
		while (set[k] != 0)
		{
			if (s1[i] == set[k])
				true = 1;
			k++;
		}
		if (true != 1)
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start = fronttrim(s1, set);
	end = backtrim(s1, set);
	return (ft_substr(s1, start, (end - start + 1)));
}
