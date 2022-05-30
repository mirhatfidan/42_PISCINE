int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
