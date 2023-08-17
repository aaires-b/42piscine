
#include <unistd.h>
#include <stdio.h>

int main()
{
	write(1, "0123456789\n", 11);
	return (0);
}