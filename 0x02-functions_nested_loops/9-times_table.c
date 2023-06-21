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
	char digit[3] = {",", ' ', '\n'};

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
			timetable[row][col] = 0;
	}

	for (row = 0; row < 10; ++row)
	{
		for (col = 0; col < 10; ++col)
		{
			if (row != 0 || col != 0)
				timetable[row][col] = row * col;
		}
	}
	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if (timetable[row][col] < 10)
				digit[0] = ' ';
			else
				digit[0] = '0' + timetable[row][col] / 10;

			digit[1] = '0' + timetable[row][col] % 10;

			if (col == 9)
				write(1, digit, 2);
			else
				write(1, digit, 3);
		}

		write(1, "\n", 2);
	}
}
