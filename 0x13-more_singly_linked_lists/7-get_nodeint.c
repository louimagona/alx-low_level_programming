#include "lists.h"
/**
 * get_nodeint_at_index - get nth node in a linked list
 * @head: head pointer
 * @index: integer position
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	listint_t *t;

	t = head;

	count = 0;
	while (t != NULL)
	{
		if (count == index)
		{
			return (t);
		}
		else
		{
			count++;
			t = t->next;
			if (!t)
				return (NULL);
		}
	}
	return (t);
}
