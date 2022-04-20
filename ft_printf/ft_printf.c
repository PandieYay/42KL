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

static void	checkformat(char **format, int *i);
static int	checkpercent(va_list args, const char *format);

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
			i += checkpercent(args, format);
			if (i == -1)
				return (-1);
			format++;
		}
		checkformat(((char **)&format), &i);
	}
	va_end(args);
	return (i);
}

static void	checkformat(char **format, int *i)
{
	if (**format != '\0' && **format != '%')
	{
		write(1, (*format), 1);
		(*format)++;
		(*i)++;
	}
}

static int	checkpercent(va_list args, const char *format)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
	{
		i += ft_putstr("0x");
		i += longdectohex(va_arg(args, unsigned long), "0123456789abcdef");
	}
	else if (*format == 'd' || *format == 'i')
		i += formatdi(va_arg(args, int));
	else if (*format == 'u')
		i += formatu(va_arg(args, unsigned int));
	else if (*format == 'x')
		i += dectohex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (*format == 'X')
		i += dectohex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (*format == '%')
		i += ft_putchar('%');
	else
		return (-1);
	return (i);
}

// int	main(void)
// {
// 	printf(" %%%% ");
// 	ft_printf(" %%%% ");
// }