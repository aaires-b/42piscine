
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	int j;
	int i;
	char tmp;

	i = 0;
	j = ft_strlen(str);
	while(i < j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return(str);
}

int main()
{
	char src[] = "lisboa";

	printf("%s", ft_strrev(src));
	return(0);
}

