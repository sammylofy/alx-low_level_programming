#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Code to print z-a
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letters;

	letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');

	return (0);
}
