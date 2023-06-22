#include "main.h"
#include <unistd.h>

/**
 * times_table - Displays 2x2 dimensional arrays
 *
 * Description: Computes multiplication with the first row
 * first column initialized to 0, then calculations performed
 * on the other columns
 *
 * Return: (void) no return type
 *
 */
void times_table(void)
{
	int timetable[10][10];
	int row, col;

	/* Initializing array to 0 */
	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			timetable[row][col] = 0;
		}
	}

	/* Performing calculations */
	for (row = 0; row < 10; ++row)
	{
		for (col = 0; col < 10; ++col)
		{
			if (row != 0 || col != 0)
			{
				timetable[row][col] = row * col;
			}
		}
	}

	/* Printing the result */
	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			printf("%*d", 3, timetable[row][col]);
			if (col != 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
