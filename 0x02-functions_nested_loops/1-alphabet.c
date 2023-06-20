#include "main.h"

/**
 * print_alphabet -A user-defined function
 *
 * Description: print_aphabet to print all the alphabets a-z
 * receives no argument.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';
	do {
		putchar(letter);

		++letter;
	} while (letter <= 'z');
	putchar('\n');
}
