#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - dog information
* @name: dog name
* @age: dog age
* @owner: dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
* dog_g - Typedef for struct dog.
*/

typedef struct dog dog_t;

/*
* functions prototypes:
*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
