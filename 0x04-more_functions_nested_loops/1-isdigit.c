#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: type int
 *
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c <= 57 && 48 >= c)
		return (1);
	else
		return (0);
}
