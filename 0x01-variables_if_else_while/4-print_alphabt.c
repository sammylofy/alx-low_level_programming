#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print a-z except e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' || letters == 'q')
			continue;
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
