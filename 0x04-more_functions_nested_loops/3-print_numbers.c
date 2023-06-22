#include "main.h"

/**
 * print_numbers - function to print digits 0-9
 * Description: Prints all digits 0-9
 * Return: (void)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');
}
