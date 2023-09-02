#include "main.h"

/**
 * _strncat - concatenates n characters from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = _strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
			i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
