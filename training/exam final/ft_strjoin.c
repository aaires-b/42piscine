#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlength(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int ft_count(int size, char **strs, char *sep)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while(i < size)
	{
		count +=  ft_strlength(strs[i]);
		i++;
	}
	count += (size -1) * ft_strlength(sep);
	return (count);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *aux;
	int i; 

	if (size == 0)
	{
		aux = malloc(1);
		aux[0] = 0;
		return (aux);
	}
	i = 0;
	aux = ((char*)malloc(sizeof(char) * ft_count(size, strs, sep)));
	aux[0] = 0;
	while (i < (2 * size) - 1)
	{
		if( i % 2 == 0)
		{
			aux = ft_strcat(aux, strs[i / 2]);
		}
		else
		{
			aux = ft_strcat(aux, sep);
		}
		i++;
	}
	return(aux);
}
int	main(void)
{
	char	*strs[3];
	char	*sep;
	int		size;

	sep = "oi";
	size = 3; 
	strs[0] = "ana";
	strs[1] = "bel";
	strs[2] = "rogerio";
	printf("%s", ft_strjoin(size, strs, sep));
}