/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:40:35 by edlim             #+#    #+#             */
/*   Updated: 2022/02/17 11:40:36 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && (s1[counter] != 0 || s2[counter] != 0))
	{
		if (s1[counter] < s2[counter])
			return (-1);
		else if (s1[counter] > s2[counter])
			return (1);
		counter++;
	}
	return (0);
}
