#include "main.h"
/**
 * _pow_recursion - recursively calculate power(user defined function)
 * @x: integer x is the base number
 * @y: is the superscript (the power to be raised)
 * Return: Returns the value of the result gotten
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
