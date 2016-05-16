#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int sizeOfArray = 0;
	printf("Set a size of array\n");
	scanf("%d", &sizeOfArray);

	char * string = (char *) malloc(sizeOfArray);
	for(int i = 0; i < sizeOfArray-1; i++)
	{
		string[i] = rand()%26 + 'a';
	}
	string[sizeOfArray-1] = '\0';
	printf("%s\n", string);
	printf("Size of the string %d\n", strlen(string));
	free(string);
	return 0;
}
