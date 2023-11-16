#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of the
 * substring needle in the string haystack
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *nee = needle;

		while (*nee && *hay == *nee)
		{
			hay++;
			nee++;
		}
		if (!*nee)
		{
			return (haystack);
		}
	}
		return (NULL);
}
