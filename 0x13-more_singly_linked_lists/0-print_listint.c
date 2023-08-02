#include "lists.h"

void print_listint_helper(const listint_t *h, size_t *count);

/**
 * print_listint_helper - print all the data in list
 * @h: the list
 * @count: the value to count nodes
 * Return: The number of nodes
 */

void print_listint_helper(const listint_t *h, size_t *count)
{
	if (h == NULL)

		return;


	printf("%d\n ", h->n);
	(*count)++;
	print_listint_helper(h->next, count);
}
/**
 * print_listint - print all the data in list
 * @h: the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	print_listint_helper(h, &count);
	return (count);
}
