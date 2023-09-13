#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0)
	{
		return;
	}

	action(array[0]);
	array_iterator(array + 1, size - 1, action);
}

/**
 * print_element - Example function to print an integer element.
 *
 * @n: The integer element to be printed.
 */
void print_element(int n)
{
	printf("%d ", n);
}

/**
 * square_element - Example function to square an integer element.
 *
 * @n: The integer element to be squared.
 */
void square_element(int n)
{
	printf("%d ", n * n);
}
