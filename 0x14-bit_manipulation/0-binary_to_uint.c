#include "main.h"
#include <stdio.h>

unsigned int binaryToUnitHelper(int base, int power);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there's an error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, length;

	if (b == NULL)
		return (0);

	result = 0;
	length = (unsigned int) strlen(b) - 1;
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
 * binaryToUnitHelper - Helper function to calculate the power.
 * @base: The base value to be raised to a power.
 * @power: The power to which the base is raised.
 *
 * Return: The result of raising the base to the power.
 */

unsigned int binaryToUnitHelper(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * binaryToUnitHelper(base, power - 1));
}
