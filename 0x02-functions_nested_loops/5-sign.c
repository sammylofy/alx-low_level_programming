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
		putchar('+');
	} else if (n == 0)
	{
		putchar('0');
	} else
	{
		putchar('-');
		result = -1;
	}

	if (result == -1)
		putchar('/');
	else
		putchar(result + '0');

	putchar(',');
	putchar(' ');
	return (result);
}
