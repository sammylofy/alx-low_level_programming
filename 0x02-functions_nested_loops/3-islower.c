#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int value;

	if (c >= 97 && c <= 122)
	{
		value = 1;
	} else
	{
		value = 0;
	}

	return (value);
}
