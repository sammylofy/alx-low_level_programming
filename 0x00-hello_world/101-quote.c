#include <stdio.h>
#include <unistd.h>
/**
 * main - printing without printf and puts
 * Return: always 1 (Error)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = 59;

	if (write(2, msg, length) != length)
		return (1);

	return (1);
}
