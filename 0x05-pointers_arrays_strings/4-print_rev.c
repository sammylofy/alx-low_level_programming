#include "main.h"
/**
 * print_rev - printing string in reverse order
 * @s: character array
 * Return: nothing
 */
void print_rev(char *s)
{
	int len, i;

	if (s == NULL)
		return;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
