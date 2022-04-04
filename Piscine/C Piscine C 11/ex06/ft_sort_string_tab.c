/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:37:30 by edlim             #+#    #+#             */
/*   Updated: 2022/02/27 13:37:31 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_params(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] == str2[i])
		i++;
	if (str[i] > str2[i])
		return (1);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i] != 0)
	{
		j = 1;
		while (tab[j] != 0)
		{
			if (ft_sort_params(tab[j - 1], tab[j]) == 1)
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}
