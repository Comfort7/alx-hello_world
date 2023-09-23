#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string consists of digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
		return (0);
	str++;
	}
	return (1);
}
/**
 * multiply - Multiply two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_result, i, j, carry = 0;
	char *result;
	int temp;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	len_result = len1 + len2;
	result = malloc(len_result + 1);

	if (result == NULL)
	{
	perror("Memory allocation error");
		exit(98);
	}
	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	i = len1 - 1;

	while (i >= 0)
	{
	carry = 0;
	j = len2 - 1;

	while (j >= 0)
	{
		temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
		carry = temp / 10;
		result[i + j + 1] = (temp % 10) + '0';
		j--;
	}
			result[i + j + 1] = (num1[i] - '0') * (num2[j] - '0') +
				(result[i + j + 1] - '0') + carry + '0';
	i--;
	}
	return (result);
}
