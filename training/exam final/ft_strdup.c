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

char *ft_strdup(char *src)
{
	char *tmp;
	int i;

	tmp = ((char *)malloc(sizeof(char) * (ft_strlength(src) + 1)));
	if (tmp == NULL)
	{
		return ((char *) NULL);
	}
	else
	{
		i = 0;
		while(src[i])
		{
			tmp[i] = src[i];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
}
int	main(void)
{
	char	*src;

	src = "54";
	printf("%s", ft_strdup(src));
}