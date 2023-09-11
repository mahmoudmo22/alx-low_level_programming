#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a variable of type dog
 * @d: variable dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
