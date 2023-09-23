#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Checks if a string consists of only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
		return (0);
		}
		str++;
	}
	return (1);
}
/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int product;
	int len1 = 0, len2 = 0, len_result, carry = 0, i, j, k;
	char *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	len_result = len1 + len2;
	result = malloc(len_result + 1);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len_result; i >= 0; i--)
		result[i] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	for (j = len2 - 1, k = i + len2 + 1; j >= 0; j--, k--)
	{
	product = (num1[i] - '0') * (num2[j] - '0') + result[k] - '0' + carry;
		result[k] = (product % 10) + '0';
		carry = product / 10;
	}
	result[k] += carry;
	}
	for (i = 0; i < len_result; i++)
	if (result[i] != '0')
		break;
	return (result + i);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 98 if there's an error.
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);
	return (0);
}
