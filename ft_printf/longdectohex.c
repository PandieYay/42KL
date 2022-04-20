/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dectohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:19:28 by edlim             #+#    #+#             */
/*   Updated: 2022/04/20 14:19:28 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	hexlen(size_t nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}

static void	ft_put_base(size_t nb, char *base)
{
	size_t	len;

	len = 0;
	while (base[len])
		len++;
	if (nb >= len)
	{
		ft_put_base(nb / len, base);
		ft_put_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
}

int	longdectohex(unsigned long nb, char *base)
{
	int		i;

	i = 0;
	ft_put_base(nb, base);
	i = hexlen(nb);
	return (i);
}
