void	ft_rev_int_tab(int *tab, int size)
{
	int	sayac;
	int	temp;

	sayac = 0;
	while (sayac <= size - 1)
	{
		temp = tab[sayac];
		tab[sayac] = tab[size - 1];
		tab[size - 1] = temp;
		sayac++;
		size--;
	}
}
