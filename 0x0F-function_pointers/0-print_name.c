#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using the provided printing function.
 *
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_normal - Prints the name as-is.
 *
 * @name: The name to be printed.
 */
void print_normal(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * print_reverse_recursive - Recursively prints the name in reverse order.
 *
 * @name: The name to be printed.
 * @len: The current length of the name being processed.
 */
void print_reverse_recursive(char *name, int len)
{
	if (len <= 0)
	{
		printf("\n");
		return;
	}
	printf("%c", name[len - 1]);
	print_reverse_recursive(name, len - 1);
}

/**
 * print_reverse - Wrapper function to initiate recursive printing.
 *
 * @name: The name to be printed in reverse.
 */
void print_reverse(char *name)
{
	printf("Reversed Name: ");
	print_reverse_recursive(name, strlen(name));
}
