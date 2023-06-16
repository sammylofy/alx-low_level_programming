#include <stdio.h>
/**
 * In this source code, we will be printing the sizes of char,int,long int,long long int,float.
 * the function main returns (0)
 * */
int main(void)
{
printf("Size of a char: %d\n", sizeof(char));
printf("Size of an int: %lu\n", (unsigned long) sizeof(int));
printf("Size of a long int: %lu\n", (unsigned long) sizeof(long));
printf("Size of a long long int: %lu\n", (unsigned long) sizeof(long long));
printf("Size of a float: %lu\n", (unsigned long) sizeof(float));
return (0);
}
