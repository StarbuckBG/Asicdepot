#include <stdio.h>
#include <string.h>

int main()
{
	char array[] = "Hello world";
	printf("Before memset %s\n", array);
	memset(array, '5', strlen(array));
	printf("After memset %s\n", array);
	return 0;
}

