#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *aux;

	i = 0;
	size = (max - min) + 1;
	aux = ((int*)malloc(sizeof(int) * size));
	*range = aux;
	if(*range == NULL)
		return(-1);
	if( min >= max)
		return(0);
	while(i < size)
	{
		aux[i] = min + 1;
		i++;
	}
	aux[i] = '\0';
	return(i);

}
int	main(void)
{
	int	min;
	int	max;
	int	*ptr;

	min = 5;
	max = 20;
	printf("%d", ft_ultimate_range(&ptr, min, max));
}