void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			b = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = b;
			a = -1;
		}
		a++;
	}
}

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;

	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}

