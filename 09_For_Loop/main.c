#include <stdio.h>

int main()
{
	char array[] = "Hello world";

	// for(declaration, condition, action) 
	// {
	//	code;
	// }
	for(int i = 0; i < sizeof(array); i++)
	{
		printf("%d %d\n", array[i], i);
	} 

	return 0;
}
