#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The pointer to the memory area
 * @b: The value to set
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
			i++;
	}

	return (s);
}
