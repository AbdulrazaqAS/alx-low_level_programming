#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
