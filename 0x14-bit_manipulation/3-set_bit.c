#include "main.h"
/**
 * set_bit - set the bit into 1
 * @n: the number to be changed
 * @index: the index to effect the change
 *
 * Desription: convert the value
 * at an index to 1
 *
 * Return: the bit is changed to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask;

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
