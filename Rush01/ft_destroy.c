#include <stdlib.h>
#include "ft_rush.h"

void	ft_destroy_tab(char **tab, int size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}
