#include "main.h"
/**
 * get_bit - A function to convert from binary to unsigned int
 * @index: The index of the number
 * @n: the unsigned int value
 *
 * Description: This function returns the bit value
 * of a given index
 *
 * Return: The -1 if invalid index is entered
 * else the bit is returned 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
