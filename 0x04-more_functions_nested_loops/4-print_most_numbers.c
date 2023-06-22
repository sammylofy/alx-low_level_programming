#include "main.h"

/**
 * print_most_numbers - function to print digits
 * Description: except 2 and 4
 * */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		putchar(c);
	}
	putchar('\n');
}
