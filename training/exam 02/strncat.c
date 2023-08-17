
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dest[i] && i < n)
		i++;
	while(src[j] && i < n)
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
	char src[] = "lisboa";
	char dest[] = "portoo";
	unsigned int n = 5;

	printf("%s", ft_strncat(dest, src, n));
}