int	ft_fibonacci(int index)
{
	int	a;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else if (index > 1)
	{
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (a);
	}
	else
		return (-1);
}
