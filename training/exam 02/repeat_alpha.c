
#include <unistd.h>
#include <stdio.h>


int index_alpha(char c)
{
	int repeat;

	repeat = 0;    
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a';
	else if( c >= 'A' && c <= 'Z')
		repeat = c - 'A';
	else
		repeat = 0;
	return (repeat);
}
int main(int ac, char **av)
{
	int repeat;
	int i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			repeat = index_alpha(av[1][i]);
			while(repeat >= 0)
			{
				write(1, &av[1][i], 1);
				--repeat;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
