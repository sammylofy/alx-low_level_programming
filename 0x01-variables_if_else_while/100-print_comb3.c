#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Code to print 01 - 89
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit1;
	int i;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (i = 1; i < 10; i++)
		{
			putchar((digit1 % 10) + '0');
			putchar(i + '0');

			if (digit1 != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
