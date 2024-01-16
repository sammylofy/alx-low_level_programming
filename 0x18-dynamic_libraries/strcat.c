#include "main.h"
/**
 * _strcat - a c function to concatenate two strings
 * @dest: the destination file that the string is appended to
 * @src: the text that is appended to dest
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
