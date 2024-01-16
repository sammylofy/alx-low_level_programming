#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: of type Character
 * Return: Integer value is returned
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
