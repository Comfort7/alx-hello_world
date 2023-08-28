#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - Locates the first occurrence of any of
 * the bytes in accept within s
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing the bytes to search for
 *
 * Return: Pointer to the first matching byte in @s, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
