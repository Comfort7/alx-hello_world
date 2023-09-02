#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return:
 *   - Pointer to the first occurrence of needle in haystack
 *   - NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*n && *h == *n)
		{
			h++;
			n++;
		}

	if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
