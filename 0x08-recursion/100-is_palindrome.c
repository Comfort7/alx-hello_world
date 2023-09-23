#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int left;
	int right;

	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}

	left = 0;
	right = len - 1;

	while (left < right)
	{
	if (s[left] != s[right])
	{
		return (0);
	}
		left++;
		right--;
	}

	return (1);
}
