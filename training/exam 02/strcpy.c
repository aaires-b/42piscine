
#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "pitos";
	char dest[] = "oi";

	printf("%s", ft_strcpy(dest, src));
	return (0);
}
