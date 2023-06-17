#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: using nested loop to print number
 * combinations
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int inner;
	int outter;

	outter = 0;
	do {
		inner = 0;

		while (inner < 100)
		{
			int outdigtens = outter / 10;
			int outdigunit = outter % 10;
			int indigtens = inner / 10;
			int indigunit = inner % 10;

			if (outter < inner && outter != inner)
			{
				putchar(outdigtens + '0');
				putchar(outdigunit + '0');
				putchar(' ');
				putchar(indigtens + '0');
				putchar(indigunit + '0');

				if ((outter != 98) || (inner != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}

			++inner;
		}

		++outter;

	} while (outter < 100);

	putchar('\n');

	return (0);
}
