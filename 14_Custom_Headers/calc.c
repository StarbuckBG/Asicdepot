#include "calc.h"
//#define DEBUG 1

double sum(double a, double b)
{
#ifdef DEBUG
	printf("Debug sum: %lf\n", a+b);
#endif
	return a+b;
}
