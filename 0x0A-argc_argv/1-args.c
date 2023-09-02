/*
 * File: 1-args.c
 * Author: Your Name
 * Description: A C program that prints the number of arguments passed into it.
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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
