#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable with provided values.
 * @d: A pointer to the struct dog variable to initialize.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a float).
 * @owner: The owner of the dog (a string).
 *
 * Description: This function initializes a struct dog variable by allocating
 * memory for the name and owner strings and copying the provided values into
 * dynamically allocated memory. It performs error checking to ensure proper
 * memory allocation.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		fprintf(stderr, "Error: Invalid pointer to struct dog.\n");
		exit(EXIT_FAILURE);
	}

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
}
