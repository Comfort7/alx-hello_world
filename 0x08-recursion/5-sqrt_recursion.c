#include <stdio.h>

/**
 * calculate_sqrt - Recursively calculates the square root using binary search.
 * @n: The number for which to calculate the square root.
 * @start: The start of the search range.
 * @end: The end of the search range.
 *
 * Return: The natural square root of n within the specified
 * range, or -1 if not found.
 */

int calculate_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (calculate_sqrt(n, start, mid - 1));

	if (mid * mid < n)
		return (calculate_sqrt(n, mid + 1, end));

	return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (calculate_sqrt(n, 1, n));
}

