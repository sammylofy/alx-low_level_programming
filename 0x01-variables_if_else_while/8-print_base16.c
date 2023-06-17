
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print hex 0-9a-f
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int hex;

	for (hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	for (hex = 97; hex < 103; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
