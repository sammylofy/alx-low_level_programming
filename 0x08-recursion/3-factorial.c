#include "main.h"
/**
 * factorial - function to calculate the factorial of numbers.
 * @n: The integer number
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
