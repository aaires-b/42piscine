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

int main()
{
	char s1[] = "oi";

	printf("%i", ft_strlen(s1));
}