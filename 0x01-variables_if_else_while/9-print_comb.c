#include <stdio.h>

/**
 * main - main function 
 *
 * This is the main function that prints the numbers from 0 to 9 followed by
 * commas and spaces.
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
