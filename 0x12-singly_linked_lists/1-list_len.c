#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: node pointer
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
