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
	int i, count = 0;
	unsigned long int current;
	char buffer[65];

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			buffer[count] = '1';
			count++;
		}
		else if (count)
		{
			buffer[count] = '0';
			count++;
		}
	}
	if (!count)
	{
		buffer[count] = '0';
		count++;
	}


	for (i = 0; i < count; i++)
	{
		putchar(buffer[i]);
	}
	putchar('\n');
}
