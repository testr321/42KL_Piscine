#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}
