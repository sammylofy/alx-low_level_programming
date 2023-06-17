#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: code to print 0-9 without using printf
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
