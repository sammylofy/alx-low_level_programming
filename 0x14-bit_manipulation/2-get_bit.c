#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Return -1 for out-of-bounds index */

	return ((n >> index) & 1);
}
