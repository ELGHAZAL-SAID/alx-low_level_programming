#include "dog.h"


/**
* new_dog - create now dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	if (d == 0)
		return (0);

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}
