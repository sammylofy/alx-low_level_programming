#include "main.h"
/**
 * print_array - Prints the number of array specified
 * @a: a pointer to an array
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");


}
