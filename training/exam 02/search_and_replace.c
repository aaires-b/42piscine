#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4)
	{
		while(av[1][i])
		{
			if(ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
			{
				if(av[1][i] == av[2][0])
					av[1][i] = av[3][0];
					write(1, av[1], 1);
				av[1]++;
			}
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}