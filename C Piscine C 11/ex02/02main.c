#include <stdio.h>
int ft_any(char **tab, int(*f)(char*));

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
		counter++;
	return (counter);
}

int	main(void)
{
	char *tab[100] = {"Hi", "Test", "Based"};
	printf("%d", ft_any(tab, &ft_strlen));
}