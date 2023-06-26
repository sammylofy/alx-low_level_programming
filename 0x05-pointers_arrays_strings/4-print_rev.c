#include "main.h"
/**
 * print_rev - printing string in reverse order
 * @s: character array
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	putchar('\n');
}
