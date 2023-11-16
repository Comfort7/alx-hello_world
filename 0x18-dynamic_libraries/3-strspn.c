#include <stddef.h>
#include <string.h>

/**
 * _strspn - Gets length of prefix substring consisting
 * of characters from accept
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing the accepted characters
 * consisting only of bytes from @accept
 *
 * Return: Number of bytes in the segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	count = 0;

		while (*s && strchr(accept, *s))
		{
			count++;
				s++;
		}
	return (count);
}
