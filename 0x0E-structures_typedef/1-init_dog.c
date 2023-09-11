#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type  dog
 * @d: pointer to type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		e
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
