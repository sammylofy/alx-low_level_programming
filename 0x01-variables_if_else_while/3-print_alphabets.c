#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: main function here prints alphabets
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	/*while loop to iteratively print a-z*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		++alpha;
	}

	alpha = 'A';

	/*while loop to iteratively print A-Z*/
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
