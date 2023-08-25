#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *original;

	if (str == NULL)
		return (NULL);

	original = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 'a' + 'A';
	}
		str++;
	}

	return (original);
}

