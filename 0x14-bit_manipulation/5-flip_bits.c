#include "main.h"
/**
 * flip_bits - flips bits
 * @n: the number to be changed
 * @m: the index to effect the change
 *
 * Desription: returns the value flipped
 *
 * Return: the value is returned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int XOR = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = XOR >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
