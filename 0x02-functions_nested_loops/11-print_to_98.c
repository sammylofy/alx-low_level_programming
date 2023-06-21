#include "main.h"
/**
 * print_to_98 - print all natural numbers from 0 - 98
 * @n: receives integer input
 *
 * Return: No return value
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			print_number(i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
	}
	else if (n > 98)
	{
		i = n;
		while (i >= 98)
		{
			print_number(i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			i--;
		}
	}
	else
	{
		print_number(n);
	}
	putchar('\n');
}
