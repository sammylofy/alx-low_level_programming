#include "main.h"

unsigned int binaryToUnitHelper(int base, int power);

/**
 * binary_to_uint - A function to convert
 * from binary to unsigned int
 * @b: The string of binary digits
 * (only '0' and '1')
 *
 * Description: This function converts a
 * binary string to an unsigned int.
 *
 * Return: The base 10 equivalent of the
 * binary string, or 0 if the input is invalid.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int length;

	if (b == NULL)
		return (0);

	result = 0;
	length = (unsigned int)strlen(b) - 1;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result += (*b - '0') * binaryToUnitHelper(2, length);
		length--;
		b++;
	}
	return (result);
}
/**
 * binaryToUnitHelper - A helper function
 * for converting powers of a base
 * @base: The base integer
 * @power: The power integer
 *
 * Description: This function calculates
 * the value of the base raised to the power.
 *
 * Return: The calculated value.
 */
unsigned int binaryToUnitHelper(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * binaryToUnitHelper(base, power - 1));
}
