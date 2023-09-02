#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_match = 0;

	while (*s && !_strchr(accept, *s))
	{
		s++;
		count++;
	}

	return (count);
}
