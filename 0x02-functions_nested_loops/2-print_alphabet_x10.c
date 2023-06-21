#include "main.h"

/**
 * print_alphabet_x10 - user-defined function
 *
 * Description: prints a-z ten times, no arguments
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int x;

		x = 97;
		do {
			putchar(x);
			++x;
		} while (x < 123);
		putchar('\n');
	}
}
