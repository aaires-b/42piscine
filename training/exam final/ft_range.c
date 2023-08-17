#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int *ft_range(int min, int max)
{
	int *range;
	int size;
	int i;

	i = 0;
	size = (max - min);
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (range == NULL)
		return((int*)NULL);
	if(min >= max)
		return ((int *)NULL);
	while(i < size)
	{
		range[i] = min + i;
		i++;
	}
	range[i] = '\0';
	return (range);

}
int	main(void)
{
	int	min;
	int	max;
	int	*tmp;
	int	i;

	max = 10 + 48;
	min = 7 + 48;
	i = 0;
	tmp = ft_range(min, max);
	while (i < max - min)
	{
		write(1, tmp, 1);
		tmp++;
		i++;
	}
}