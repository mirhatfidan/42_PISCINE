#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
