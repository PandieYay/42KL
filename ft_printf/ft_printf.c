#include "ft_printf.h"
#include <stdio.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == 'c')
			{
				ft_putchar((char)va_arg(args, int));
				i++;
			}
			else
				return (-1);
		}
		if (format[i] != '\0')
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}

// int	main(void)
// {
// 	ft_printf("%c");
// 	printf("Hi");
// }