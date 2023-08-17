
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else 
		ft_putchar(i + 48);
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if(i % 3 == 0)
		{
			write(1, "fizz", 5);
		}
		else if(i % 5 == 0)
		{
			write(1, "buzz", 5);
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz", 9);
		}
		else 
			ft_putnbr(i);
			write(1, "\n", 1);
	i++;
	}
	return (0);
}