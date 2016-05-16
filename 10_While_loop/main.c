#include <stdio.h>

int main()
{
	int variable = 0;
	while(1)
	{
		printf("In da while\n");
		variable += 2;
		if(variable >= 10) break;
	}
	printf("%d\n", variable);
	return 0;
}
