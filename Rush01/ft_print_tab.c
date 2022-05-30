#include "ft_rush.h"

void	ft_print_tab(char **tab, int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(tab[y][x] + '0');
			if (++x < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}

