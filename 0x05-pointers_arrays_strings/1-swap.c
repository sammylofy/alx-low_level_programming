#include "main.h"
/**
 * swap_int - function to swap two numbers
 * @a: first integer value
 * @b: Second integer value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
