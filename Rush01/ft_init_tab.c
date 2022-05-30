#include <stdlib.h>

char	**ft_init_tab(char *str, int size)
{
	char	**tab;
	int		x;
	int		y;

	if (!(tab = malloc(size * sizeof(char*))))
		return (NULL);
	y = -1;
	while (++y < size)
	{
		if (!(tab[y] = malloc((size + 4) * sizeof(char))))
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][size + x] = str[2 * (y + x * size)] - '0';
	}
	return (tab);
}
