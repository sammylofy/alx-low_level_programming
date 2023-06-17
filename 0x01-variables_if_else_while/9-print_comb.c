#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print numbers separated by commas but 9
 *
 * Return: 0 (Success)
 *
 *
 */

int main(void)
{
	int digits;

	digits = 0;

	do {
		putchar(digits + '0');
		if (digits == 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		digits++;

	} while (digits < 10);

	return (0);
}
