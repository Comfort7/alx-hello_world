/*
 * File: print_arguments.c
 * Author: Your Name
 * Description: A C program that prints all the arguments
 * it receives, one per line.
 */

#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
