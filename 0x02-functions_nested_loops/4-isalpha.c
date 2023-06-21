#include "main.h"

/**
 * _isalpha - Function to check if it is an alphabet or not
 *
 * @c:the character to be checked
 *
 * Description: checks characters
 *
 * Return: 1 if it is an alphabet, 0 otherwise
 *
 *
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		result = 1;
	else

		result = 0;


	return (result);
}
