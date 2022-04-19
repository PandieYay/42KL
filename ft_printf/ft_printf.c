/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlim <edlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:15:44 by edlim             #+#    #+#             */
/*   Updated: 2022/04/19 13:15:45 by edlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[counter] != 0)
	{
		write(1, &str[counter], 1);
		counter++;
	}
	return (counter);
}

int	formatdi(int nb)
{
	int		i;
	char	*str;

	str = ft_itoa(nb);
	i = ft_putstr(str);
	free(str);
	return (i);
}

int	formatu(unsigned int nb)
{
	int		i;
	char	*str;

	str = ft_usitoa(nb);
	i = ft_putstr(str);
	free(str);
	return (i);
}

void	checkformat(char **format, int *i)
{
	if (**format != '\0' && **format != '%')
	{
		write(1, (*format), 1);
		(*format)++;
		(*i)++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				i += ft_putchar(va_arg(args, int));
			else if (*format == 's')
				i += ft_putstr(va_arg(args, char *));
			else if (*format == 'd' || *format == 'i')
				i += formatdi(va_arg(args, int));
			else if (*format == 'u')
				i += formatu(va_arg(args, unsigned int));
			else if (*format == '%')
				i += ft_putchar('%');
			else
				return (-1);
			format++;
		}
		checkformat(((char **)&format), &i);
	}
	va_end(args);
	return (i);
}

// int	main(void)
// {
// 	int	num;

// 	num = 0;
// 	printf(" %x ", 120);
// 	// printf(" %%%% ");
// 	// num = ft_printf("%c", '\0');
// 	// printf("%d", num);
// }
