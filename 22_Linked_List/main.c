
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct person
{
	char name[40];
	int age;
	struct person * next;
	struct person * previous;
}person_t;

int main()
{
/*	person_t * person1 = (person_t *) malloc(sizeof(person_t));
	strcpy(person1->name, "Person1");
	person1->age = 21;

	person_t person2;
	strcpy(person2.name, "Person2");
	person2.age = 24;

	person1->next = &person2;

	printf("%s %d\n", person1->name, person1->age);
	printf("%s %d\n", person1->next->name, person1->next->age);
*/


	person_t * prevPerson = (person_t *) malloc(sizeof(person_t));
	strcpy(prevPerson->name, "Person1");
	prevPerson->age = 21;

	printf("%s %d\n", prevPerson->name, prevPerson->age);

	person_t * curPerson = (person_t *) malloc(sizeof(person_t));
	strcpy(curPerson->name, "Person2");
	curPerson->age = 24;
	curPerson->previous = prevPerson;

	printf("%s %d\n", curPerson->name, curPerson->age);

	person_t *nextPerson = (person_t *) malloc(sizeof(person_t));
	strcpy(nextPerson->name, "Person3");
	nextPerson->age = 27;
	curPerson->next = nextPerson;
	nextPerson->previous = curPerson; 

	printf("%s %d\n", nextPerson->name, nextPerson->age);

	printf("Play with linked list\n");

	printf("%s %d\n", curPerson->previous->name, curPerson->previous->age);
	printf("%s %d\n", curPerson->next->name, curPerson->next->age);

	printf("Advanced play with linked list\n");

	curPerson = curPerson->next;
	printf("%s %d\n", curPerson->name, curPerson->age);
	curPerson = curPerson->previous;
	printf("%s %d\n", curPerson->previous->name, curPerson->previous->age);

	return 0;
}
