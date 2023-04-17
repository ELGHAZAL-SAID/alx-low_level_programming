#include "dog.h"

/**
* print_dog - print dog info
* @d: dog info struct holder
* Return: 0
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if ((*d).name == 0)
		printf("nil\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age < 0)
		printf("nil\n");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == 0)
		printf("nil\n");
	else
		printf("Owner %s\n", (*d).owner);
}
