#include "dog.h"

/**
* init_dog - initialize struct dog
* @d: struct
* @name: doge name
* @age: dog age
* @owner: dog owner
* Return: 0
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
