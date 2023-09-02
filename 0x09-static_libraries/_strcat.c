#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
			i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
