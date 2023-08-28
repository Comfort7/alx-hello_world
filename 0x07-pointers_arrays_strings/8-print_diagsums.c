#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	int i = 0;

	while (i < size)
	{
	sum1 += a[i * size + i];
	sum2 += a[i * size + (size - 1 - i)];
	i++;
	}
	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
