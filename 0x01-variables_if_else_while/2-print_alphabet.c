
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: main function here prints alphabets
 *
 * Return: 0 (Sucess)
 *
 */

int main(void)
{
	char alphabets;

	alphabets = 'a';

	/* while loop to iteratively print a-z */
	while (alphabets <= 'z')
	{
		putchar(alphabets);
		++alphabets;
	}
	putchar('\n');
	return (0);
}
