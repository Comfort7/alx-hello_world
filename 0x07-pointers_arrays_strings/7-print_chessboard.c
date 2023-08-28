#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: Pointer to a 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;

	while (row < 8)
	{
		int col = 0;

		while (col < 8)
		{
			printf("%c", a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}

