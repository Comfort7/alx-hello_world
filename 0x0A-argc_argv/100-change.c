#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed for change.
 * @cents: The amount of cents to make change for.
 *
 * Return: The minimum number of coins.
 */
int minCoins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
	if (cents >= 25)
		{
		cents -= 25;
		coins++;
		}
	else if (cents >= 10)
		{
		cents -= 10;
		coins++;
		}
	else if (cents >= 5)
		{
		cents -= 5;
		coins++;
		}
	else if (cents >= 2)
		{
		cents -= 2;
		coins++;
		}
	else
		{
		cents -= 1;
		coins++;
		}
	}

	return (coins);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 if successful, 1 for errors.
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = minCoins(cents);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", coins);
	return (0);
}
