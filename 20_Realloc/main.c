#include <stdio.h>
#include <stdlib.h>


int main()
{
	int numberOfElements = 10;
	int addedElements = 5;

	int * array1 = (int *) calloc(numberOfElements, sizeof(int));
	for(int i = 0; i < numberOfElements; i++)
	{
		array1[i] = rand()%20;
		printf("%d ", array1[i]);
	}
	printf("\nReallocation\n");
	int * array2 = (int *) realloc(array1, (numberOfElements+addedElements) * sizeof(int));
	for(int i = numberOfElements; i < numberOfElements + addedElements; i++)
	{
		array2[i] = rand()%20;
	}

	for(int i = 0; i < numberOfElements + addedElements; i++)
	{
		printf("%d ", array2[i]);
	}
	free(array2);
	return 0;
}
