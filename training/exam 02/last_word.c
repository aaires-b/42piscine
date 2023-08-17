#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i - 1] == 32) || (av[1][i - 1] == '\t'))
				i++;
			while ((av[1][i] >= 'A' && av[1][i] <= 'Z') || (av[1][i] >= 'a' && av[1][i] <= 'z'))
			{
				i++;
				write(1, &av[1][i], 1);
			}
			break;
		}
		write(1, "\n", 1);

	}
	else 
		write(1, "\n", 1);
	return (0);
}