#include <unistd.h> 
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	char *tmp;

	tmp = s1;
	while(*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (tmp);
}

int main()
{
	char s1[] = "lisboa";
	char s2[] = "porto";

	printf("%s", ft_strcpy(s1, s2));
}