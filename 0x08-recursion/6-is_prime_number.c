#include <stdio.h>

/**
 * is_divisible - Check if a number is divisible by another number.
 *
 * @n: The number to be checked for divisibility.
 * @divisor: The divisor to check for divisibility.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	if (divisor * divisor > n)
	{
		return (0);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Check if a number is a prime number.
 *
 * @n: The number to be checked for primality.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}
