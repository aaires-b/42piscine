#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int main()
{
	char src[] = "oiiiiiiii";
	char dest[] = "lisb";
	unsigned int n = 5;

	printf("%s", ft_strncpy(dest, src, n));

}