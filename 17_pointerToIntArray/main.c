#include <stdio.h>


int main()
{
	int variable = 0;
	double doubleVar = 0;
	int array[] = {1,2,3,4,5,6,7,8};
	int * pointerToArray = array;
	printf("%d %d %d %d", array[0], sizeof(array), pointerToArray[0], sizeof(pointerToArray));
	return 0;
}
