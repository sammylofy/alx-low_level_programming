#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: Destination doc
 * @src: Source doc
 * Return: string
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_ptr = dest;  /* Store the initial address of dest */

	while (*src != '\0')
	{
		*dest = *src;  /* Copy the character */
		dest++;  /* Move dest pointer to the next position */
		src++;  /* Move src pointer to the next position */
	}

	*dest = '\0';  /* Append the terminating null byte to dest */

	return (dest_ptr);  /* Return the pointer to dest */
}
