#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

int	g_nu[3];

void	ft_commas2(void)
{
	ft_putchar(g_nu[0]);
	ft_putchar(g_nu[1]);
	ft_putchar(g_nu[2]);
}

void	ft_print_comb(void)
{
	g_nu[0] = '0';
	while (g_nu[0] <= '9')
	{
		g_nu[1] = '0';
		while (g_nu[1] <= '9')
		{
			g_nu[2] = '0';
			while (g_nu[2] <= '9')
			{	
				if (g_nu[0] < g_nu[1] && g_nu[1] < g_nu[2])
				{
					ft_commas2();
					if (!(g_nu[0] == '7' && g_nu[1] == '8' && g_nu[2] == '9'))
						ft_commas();
				}
				g_nu[2]++;
			}
			g_nu[1]++;
		}
		g_nu[0]++;
	}
}
