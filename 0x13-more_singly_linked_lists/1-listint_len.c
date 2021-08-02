#include "lists.h"

/**
 * listint_len - counts the number of nodes
 * @h:  head pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *traverse;

	unsigned int count;

	traverse = h;

	count = 0;
	while (traverse != NULL)
	{
		count++;
		traverse = traverse->next;
	}
	return (count);
}
