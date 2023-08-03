#include "main.h"
/**
 * print_binary - A function for
 * converting Decimal values to binary
 * @n: The value in base 10
 *
 * Description: This function calculates the
 * the binary digits
 *
 * Return: The binary digits.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, leading_zeros;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 1;

	while (mask)
	{
		if (n & mask)
		{
			leading_zeros = 0;
			putchar('1');
		}
		else if (!leading_zeros)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (leading_zeros)
	{
		putchar('0');
	}
}
