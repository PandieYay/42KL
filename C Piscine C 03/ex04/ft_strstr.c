/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:15:24 by edlim             #+#    #+#             */
/*   Updated: 2022/02/17 12:15:25 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	to_find_c;

	counter = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[counter] != 0)
	{
		to_find_c = 0;
		while ((str[counter + to_find_c] != 0)
			&& (str[counter + to_find_c] == to_find[to_find_c]))
		{
			if (to_find[to_find_c + 1] == 0)
				return (&str[counter]);
			else
				to_find_c++;
		}
		counter++;
	}
	return (0);
}
