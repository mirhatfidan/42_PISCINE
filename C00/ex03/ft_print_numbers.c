#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	sayi;

	sayi = '0';
	while (sayi <= '9')
	{
		ft_putchar(sayi);
		sayi++;
	}
}
