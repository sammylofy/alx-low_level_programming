#include "main.h"

/**
 * jack_bauer - Prints the hh : 00
 *
 * Description: I used loop in printing them
 *
 * Return: returns nothing (void)
i */

void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			if (hh < 10)
			{
				_putchar('0' + hh / 10);
				_putchar('0' + hh % 10);
			} else
			{
				_putchar('0' + hh / 10);
				_putchar('0' + hh % 10);
			}
			_putchar(':');
			if (mm < 10)
			{
				_putchar('0' + mm / 10);
				_putchar('0' + mm % 10);
			} else
			{
				_putchar('0' + mm / 10);
				_putchar('0' + mm % 10);
			}
			_putchar('\n');
		}
	}
}
