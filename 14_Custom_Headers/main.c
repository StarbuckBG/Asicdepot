#include <stdio.h>
#include "calc.h"

#define SUCCESS 0
#define FAILURE 1
#define WRONG_VALUE 2
#define NEGATIVE_VALUE 3
#define PI 3.141592


int main()
{
	double number1 = PI;
	double number2= asd;

	double result = sum(number1, number2);
	printf("%lf\n", result);
	if(number1 < 0 || number2 < 0)
	{
		return NEGATIVE_VALUE;
	}
	else if(number1 < 0 && number2 < 0)
	{
		return WRONG_VALUE;
	}

	return SUCCESS;
}
