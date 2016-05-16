#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[40];
	int age;
} person;


int main()
{
	person_t *  Georgi = (person_t *) malloc(sizeof(person_t));

	strcpy(Georgi->name, "Georgi");
	Georgi->age = 21;

	printf("%s %d", Georgi->name, Georgi->age);
	return 0;
}



