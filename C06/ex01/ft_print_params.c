#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	if (argc > 1)
	{
		while (a < argc)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				write(1, &argv[a][b], 1);
				b++;
			}
			write(1, "\n", 1);
			a++;
		}
	}
	return (0);
}
