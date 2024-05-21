#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *b = "4";
	int result = atoi(b) + b;
	
	printf("The result is %d", result);
	return (0);
}
