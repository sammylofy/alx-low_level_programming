#include "main.h"

unsigned int binaryToUnitHelper(int base, int power);

/**
 * binary_to_unit - A function to convert from binary
 * @b: The strings of binary digits only
 * Return: The base 10 equivalent of the binary
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
 * binaryToUnitHelper - converts powers
 * @base: base integer
 * @power: power integer
 * Return: Returns the value
 */
unsigned int binaryToUnitHelper(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * binaryToUnitHelper(base, power - 1));
}
