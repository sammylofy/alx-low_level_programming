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
	int leadingZero = 1;
	int i;

	unsigned long int bitLength = sizeof(unsigned long int) * 8;

	for (i = bitLength - 1; i >= 0; i--)
	{
		int bit = (n & (1ul << i)) ? 1 : 0;


		if (bit == 1)
			leadingZero = 0;


		if (leadingZero == 0 || i == 0)
			printf("%d", bit);
	}
}
