#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;  /* Flag to check if leading zeros are encountered */

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{
			/* Skip leading zeros */
		}
		else
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1; /* Set the flag after the first non-zero bit */
		}
		mask >>= 1; /* Shift the mask to the right */
	}
}
