#include "main.h"

/**
 * get_endianness - checks machine status big or small
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *e = (char *) &j;

	return (*e);
}

