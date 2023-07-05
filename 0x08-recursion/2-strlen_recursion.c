#include "main.h"
/**
 * _strlen_recursion - Using recursion to get string lengths
 * @s: Character array
 * Return: The length value of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
