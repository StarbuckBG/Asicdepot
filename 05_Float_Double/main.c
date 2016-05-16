#include <stdio.h>

int main()
{
	float floatValue = 3.141592141592141592;
	double doubleValue = 3.141592141592141592;

	printf("%03.8f\n", floatValue);
	printf("%0.18lf\n", doubleValue);
	return 0;
}
