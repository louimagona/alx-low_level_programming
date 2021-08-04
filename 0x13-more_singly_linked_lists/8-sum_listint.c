#include "lists.h"

/**
 * sum_listint - sums data in all nodes
 * @head: head pointer
 * Return: sum of data in all pointers
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	listint_t *t;

	if (head == NULL)
		return (0);

	t = head;
	sum = 0;
	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
