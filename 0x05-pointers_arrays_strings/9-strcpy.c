#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: Destination doc
 * @src: Source doc
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int x = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for ( ; x < len ; x++)
	{
		dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
