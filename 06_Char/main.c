#include <stdio.h>


int main()
{
	char charValue = 'a';
	int binary = 0b0011;
	int hex = 0x7F;
	int octa = 077;
	printf("%c, %x, %x, %o\n", charValue, binary, hex, octa);
	return 0;
}
