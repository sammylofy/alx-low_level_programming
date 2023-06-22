#include "main.h"

/**
 * print_square - print square
 * @size: size of the box
 */
void print_square(int size)
{
	int i, j;

	int c = 35;

	i = 0;
	do {
		for (j = 1; j <= size; j++)
		{
			putchar(c);
		}
		putchar('\n');

		i++;
	} while (i < size);
}
