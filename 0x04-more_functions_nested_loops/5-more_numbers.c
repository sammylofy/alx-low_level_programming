#include "main.h"

/**
 * more_numbers - to print numbers
 * Description: Print numbers from 0-14
 * Return: (void)
 */
void more_numbers(void)
{
	int i = 1;

	do {
		int c;

		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
			{
				_putchar(c + '0');
			} else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
		i++;
	} while (i <= 10);
}
