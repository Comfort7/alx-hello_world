#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *original = str;
	char leet_map[] = "AEOTLaeotl";
	char leet_replacements[] = "4307143071";
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		j = 0;
		while (leet_map[j] != '\0')
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (original);
}

