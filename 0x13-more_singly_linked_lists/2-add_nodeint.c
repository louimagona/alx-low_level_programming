#include "lists.h"

/**
 * add_nodeint - adds a node at beginning of list
 * @head: head pointer
 * @n: some value added I dont see for what
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	else
	{
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	}
	return (*head);
}
