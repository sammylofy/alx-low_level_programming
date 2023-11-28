#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Return -1 for out-of-bounds index */

	*n &= ~(1UL << index); /* Clear the bit at the given index to 0 */

	return (1); /* Return 1 to indicate success */
}