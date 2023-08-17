#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i;
	int s;
	int a;

	a = 0;
	s = 1;
	i = 0;
	while(str[i] == 32)
		i++;
	if(str[i] == '+' || str[i]== '-')
	{
		if(str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		a = 10 * a + (str[i] - 48);
		i++;
	}
	return(a * s);
}

int main()
{
	char str[] = "-21";

	printf("%d", ft_atoi(str));
}