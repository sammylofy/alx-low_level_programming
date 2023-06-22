#include "main.h"
#define MAX_SIZE 15
/**
 * print_times_table - function to print n timestable
 * @n: 2 dimensional array of nxn
 */
void print_times_table(int n)
{
	if (n <= MAX_SIZE && n >= 0)
	{
		int timetable[MAX_SIZE][MAX_SIZE];
		int row, col;

		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				timetable[row][col] = 0;
			}
		}
		for (row = 0; row < n; ++row)
		{
			for (col = 0; col < n; ++col)
			{
				if (row != 0 || col != 0)
				{
					timetable[row][col] = row * col;
				}
			}
		}
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				printf("%d", timetable[row][col]);
				if (col != (n - 1))
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	} else
	{
		printf("You entered an Invalid data %d\n", n);
	}
}
