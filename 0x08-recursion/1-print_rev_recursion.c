#include "main.h"
/**
 * _print_rev_recursion - A function that uses recursion to print reverse
 * String
 * @s: Character String
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);

	}
	else
	{
		putchar('\n');
		return;
	}
}
