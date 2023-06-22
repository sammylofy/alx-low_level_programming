#include "main.h"
/**
 * _isupper - checks upper character
 * @c: Converts any character to int
 * to determine the case of it.
 *
 * Return: 1 if upper_case or 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && 90 >= c)

		result = 1;
	else

		result = 0;


	return (result);
}
