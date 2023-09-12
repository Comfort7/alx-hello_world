#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to the dog_t structure to be freed.
 *
 * Description: This function frees the dynamically allocated memory for the
 * name and owner strings of a dog structure and then frees the dog structure
 * itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}
