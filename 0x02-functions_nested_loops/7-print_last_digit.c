#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function to get the last digit of
 * any number.
 *
 * @n: Receive an input of Integer
 *
 * Return: the last digit of any number is returned.
 *
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (n == 0)
		result = 0;
	if (result < 0)
		result = abs(result);
	_putchar(result + '0');

	return (result);

}
