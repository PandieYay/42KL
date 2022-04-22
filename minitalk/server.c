#include "minitalk.h"
#include <stdio.h>

void handle_sigusr()
{
	signal(SIGUSR1, handle_sigusr);
    ft_putstr("Hi");
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_putstr("Server PID: ");
	ft_putnbr(pid);
	signal(SIGUSR1, handle_sigusr);
	while(1);
}