#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the provided name, age, and owner.
 * @name: The name of the new dog (a string).
 * @age: The age of the new dog (a float).
 * @owner: The owner of the new dog (a string).
 *
 * Return: A pointer to the newly created dog_t structure, or NULL if memory
 * allocation fails.
 *
 * Description: This function creates a new dog_t structure and dynamically
 * allocates memory for the name and owner strings, copying the provided
 * values.
 * It returns a pointer to the new dog_t structure. If memory allocation fails,
 * it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = strdup(name);
	new_dog_ptr->age = age;
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	return (new_dog_ptr);
}
