#include <stdio.h>
#include <stdlib.h>


int main()
{
	int numberOfItems = 0;
	scanf("%d", &numberOfItems);

	int * pointerToNumbers = (int *) calloc(numberOfItems, sizeof(int));

/*	for(int i = 0; i < numberOfItems; i++)
	{
		int currentNumber = 0;
		scanf("%d", &currentNumber);
		pointerToNumbers[i] = currentNumber;
	}
*/
	for(int i = 0; i < numberOfItems; i++)
	{
		printf("%d\n", pointerToNumbers[i]);
	}
	free(pointerToNumbers);
	return 0;
}
