#include <stdio.h>
#include <libgen.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	char *mynameis = basename(__FILE__);

	printf("%s\n", mynameis);

	return (0);
}
