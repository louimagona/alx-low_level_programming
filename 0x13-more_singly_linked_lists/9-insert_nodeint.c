#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an nth index
 * @head: head pointer
 * @n: int to be inserted as data in the new node
 * Return: pointer to the newnode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *t;
	unsigned int count;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	t = *head;
	count = 0;
	if (t == NULL)
		return (NULL);
	else
	{
	while (t)
	{
		if (count == idx)
		{
			newnode->next = t->next;
			t->next = newnode;
		}
		t = t->next;
		count++;
	}
	}

	return (newnode);

}
