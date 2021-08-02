#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *traverse;

	unsigned int i;

	traverse = h;

	i = 0;
	while (traverse != NULL)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
		i++;
	}
	return (i);
}
