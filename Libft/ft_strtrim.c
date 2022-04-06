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

int	letters(char const *s1, char const *set)
{
	int	letters;
	int	i;

	letters = 0;
	while (*s1 != 0)
	{
		i = 0;
		while (set[i] != 0)
		{
			if (*s1 == set[i])
				letters++;
			i++;
		}
		s1++;
	}
	return (letters);
}

char const	*checkset(char const *s1, char const *set)
{
	int	i;

	i = -1;
	while (set[++i] != 0)
	{
		if (*s1 == set[i])
		{
			s1++;
			i = -1;
		}
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	int		i;

	i = 0;
	trimmedstr = malloc(sizeof(char) * (ft_strlen(s1) - letters(s1, set) + 1));
	if (!trimmedstr)
		return (NULL);
	while (*s1 != 0)
	{
		s1 = checkset(s1, set);
		trimmedstr[i] = *s1;
		i++;
		s1++;
	}
	trimmedstr[i] = 0;
	return (trimmedstr);
}
