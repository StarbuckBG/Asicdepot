#include <stdio.h>

// -1 a > b ; 0 a = b; 1 b > a

int compare(int a, int b)
{
	int result = -2;
	if(a > b)
	{
		printf("First if\n");
		result = -1;
	}
	else if(a == b)
	{
		printf("Else if\n");
		result = 0;
	}
	else
	{
		printf("Else\n");
		result = 1;
	}

	return result;
}

int main()
{
	int number1 = 6;
	int number2 = 5;
	printf("%d\n", compare(number1, number2));
	return 0;

}
