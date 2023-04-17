#ifndef dog_h
#define dog_h

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

typedef struct dog do_g;

/*
* functions prototypes:
*/

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
