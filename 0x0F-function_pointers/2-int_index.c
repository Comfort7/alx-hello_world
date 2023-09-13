#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first matching element, or -1 if no match is found
 *         or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
		i++;
	}

	return (-1);
}

/**
 * compare_even - Example comparison function to find the first even number.
 *
 * @n: The integer to be compared.
 *
 * Return: 0 if @n is not even, 1 if @n is even.
 */
int compare_even(int n)
{
	return ((n % 2 == 0) ? 1 : 0);
}
