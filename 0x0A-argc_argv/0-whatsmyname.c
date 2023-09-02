/*
 * File: print_program_name.c
 * Author: Your Name
 * Description: A C program that prints its name, including the path.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
	char *program_name = argv[0];

	printf("%s\n", program_name);
	}
	else
	{
		fprintf(stderr, "Error: Unable to retrieve program name.\n");
		return (1);
	}

	return (0);
}
