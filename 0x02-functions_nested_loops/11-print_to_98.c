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

	if (n < 98 && n > 0)
	{
		i = n;

		do {
			printf("%d, ", i);
			if (i == 98)
				printf("%d", i);
			i++;
		} while (i <= 98);
	}
	else if (n > 98)
	{
		i = n;

		do {
			printf("%d, ", i);
			if (i == 98)
				printf("%d", i);

			i--;
		} while (i >= 98);
	}
	else
	{
		i = n;

		do {
			printf("%d, ", i);
			if (i == 98)
				printf("%d", i);
			i++;
		} while (i <= 98);
	}
	printf("\n");
}
