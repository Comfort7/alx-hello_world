#include <stddef.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte value to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
