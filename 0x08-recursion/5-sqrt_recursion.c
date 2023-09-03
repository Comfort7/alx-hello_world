#include <stdio.h>

/**
 * _sqrt_recursion_helper - Helper function for _sqrt_recursion
 *
 * @n: The number for which the square root is to be calculated
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid;
	long square;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = (long)mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number using
 * recursion
 *
 * @n: The number for which the square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
