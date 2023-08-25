#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
	if (c == separators[i])
		return (true);
	}
	return (false);
}
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	char *original;
	bool new_word;

	original = str;
	new_word = true;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
	if (new_word && (*str >= 'a' && *str <= 'z'))
		{
		*str -= 'a' - 'A';
		new_word = false;
		}
	else if (is_separator(*str))
		{
		new_word = true;
		}
	else
		{
		new_word = false;
		}
	    str++;
	}
	return (original);
}
