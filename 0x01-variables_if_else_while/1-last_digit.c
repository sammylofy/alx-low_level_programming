
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: Prints the last digit of a
 *  randomly generated number and provides
 *  additional information about it.
 *
 *  Return: 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/* your code goes there */
	printf("Last digit of %d is %d and ", n, last_digit);
	if ((last_digit != 0) && (last_digit >= 6))
	{
		printf("is greater than 5\n");
	}
	else if (last_digit < 6 && (last_digit != 0))
	{
		printf("is less than 6 and not 0\n");
	}
	else
	{
		printf("is 0\n");
	}
	return (0);
}
