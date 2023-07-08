#include "main.h"
#include<stdio.h>
/**
 * _puts - function to print string
 * @str: the string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
