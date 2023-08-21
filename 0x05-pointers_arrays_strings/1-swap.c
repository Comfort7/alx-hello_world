#include "main.h"

/**
 * swap_int - swap integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_in(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
