
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *av)
{
	int i;

	i = 0;
	while(av[i])
		i++;
	return (i);
}

int main(int ac , char **av)
{
	int size;

	size = ft_strlen(av[1]);
	if (ac == 2)
	{
		while(*av[1] && size >= 0)
		{
			write(1, &av[1][size], 1);
		size--;
		}
		write(1, "\n", 1);
	}
	else	
		write(1, "\n", 1);
	return (0);

}