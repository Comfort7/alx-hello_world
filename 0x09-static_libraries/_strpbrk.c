#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return:
 *   - Pointer to the first occurrence in s of any character in accept
 *   - NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
	{
		return (s);
	}
		s++;
	}

	return (NULL);
}
