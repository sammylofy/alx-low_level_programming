#include "lists.h"
/**
 * isEmpty - Checks if the list is empty
 * @node : receives the list
 * Return: 1 or 0
 */
int isEmpty(struct listint_t *node)
{
	int b = 0;

	if (isEmpty(node))
		b = 1;
	return (b);
}
/**
 * head_list - get the first data of each node
 * @node: the list
 * Return: the value is returned
 */
int head_list(struct listint_t *node)
{
	int value = 0;

	if (isEmpty(node))
		return;
	else
		value = node->n;
	return (value);
}
/**
 * tail - Gets the remaining list address
 * @l: receives the list
 * Return: Returns the address to remaining lists
 */
struct listint_t tail(struct listint_t l)
{
	if (isEmpty(l))
		return (NULL);
	else
		return (l->next);
}
