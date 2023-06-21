#include "main.h"

/**
 * print_sign - Print the signs
 *
 * @n: The character Received
 *
 * Description: checks characters
 *
 * Return: 1 and print + if greater than 0, otherwise
 * return 0 and -
 *
 */

int print_sign(int n)
{
	int result;

	result = 0;
	if (n > 0)
	{
		result = 1;
		_putchar('+');
	} else if (n == 0)
	{
		_putchar('0');
	} else
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
