#include "main.h"

/**
 * print_line - function to print line
 * @n: print rhe numbers as long as n-value
 *
 * Return: (void)
 */

void print_line(int n)
{
	char c = '_';

	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar(c);

	}
	_putchar('\n');
}
