
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int     *ft_range(int start, int end)
{
	int *array;
	int size;

	size = end >= start ? end - start : start - end;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	while( end != start)
	{
		*array = end > start ? start++ : start--;
	array++;
	}
	*array = start;
	return (array - size);
}

int main()
{
	int start;
	int end;
	int *tmp;
	int i;

	start = 5;
	end = 20;
	tmp = ft_range(start, end);
	i = 0;
	while(i < end - start)
	{
		printf("%d\n", tmp[i]);
	i++;
	}
	return(0);
}