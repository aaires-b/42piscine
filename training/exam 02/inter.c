
#include <unistd.h>
int	check_doubles(char *str, int pos, char c)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if(ac == 3)
	{
		while(av[1][i] || av[2][j])
		{
			while (av[1][i] == av[2][j])
			{
				if (check_doubles(av[1], i, av[1][i]) == 1)
					write(1, &av[1][i], 1);
			i++;
			}
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}