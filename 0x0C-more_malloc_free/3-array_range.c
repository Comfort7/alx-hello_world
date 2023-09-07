#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (included) in the array.
 * @max: The maximum value (included) in the array.
 *
 * Return: A pointer to the newly created array.
 * If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
