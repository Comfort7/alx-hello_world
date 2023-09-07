#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: A pointer to the reallocated memory block.
 * If new_size is equal to old_size, returns ptr.
 * If ptr is NULL, returns malloc(new_size).
 * If new_size is zero and ptr is not NULL, returns NULL and frees ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
	new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	new_size = old_size;

	memcpy(new_ptr, ptr, new_size);
	free(ptr);

	return (new_ptr);
}
