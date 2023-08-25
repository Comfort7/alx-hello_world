#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int left, right;

	if (a == NULL || n <= 1)
		return;

	left = 0;
	right = n - 1;

	while (left < right)
	{
	int temp = a[left];

	a[left] = a[right];

	a[right] = temp;

	left++;
	right--;
	}
}

