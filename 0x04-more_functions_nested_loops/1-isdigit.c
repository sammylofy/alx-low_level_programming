#include"main.h"

/**
 * _isdigit - checks for digits
 * @c: type int
 *
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(int c)
{
	int val;

	if (c >= '0' && c <= '9')
		val = 1;
	else
		val = 0;
	return (val);
}
