#include "main.h"
/**
 * puts2 - to print string
 * @str: character
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			putchar(str[i]);
		}
		else if (i > 0  && (i % 2) == 0)
		{
			putchar(str[i]);
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	putchar('\n');
}
