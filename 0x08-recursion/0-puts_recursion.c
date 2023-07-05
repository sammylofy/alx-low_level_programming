#include "main.h"
/**
 * _puts_recursion - A function to recursively print string
 * @s: Character array of String
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
