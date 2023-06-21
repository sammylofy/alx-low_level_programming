#include "main.h"

/**
 * print_number - Prints an integer as a string character by character
 * @n: The integer to be printed
 */

void print_number(int n)
{
	char buffer[12]; /* Buffer to store the number as a string */
	int i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (n != 0)
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}

	while (i > 0)
	{
		putchar(buffer[--i]);
	}
}

