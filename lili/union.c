
#include <stdio.h>
#include <unistd.h>

void ft_print(char  *array, char *av)
{
	int i;

	i = 0;
	while(av[i])
	{
		if(array[av[i]] == 0)
		{
			write(1, &av[i], 1);
			array[av[i]] = 1;
		}
	i++;
	}
}

int main(int ac, char **av)
{
	char array[128];
	int i;

	i = 0;
	while(i < 128)
	{
		array[i] = 0;
		i++;
	}
	if(ac == 3)
	{
		ft_print(array, av[1]);
		ft_print(array, av[2]);
	}
	else 
		write(1, "\n", 1);
	return (0);
}