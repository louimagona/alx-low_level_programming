#include "lists.h"

/**
 * add_nodeint_end - adds a node at beginning of list
 * @head: head pointer
 * @n: some value added I dont see for what
 * Return: pointer to list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *traverse;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	traverse = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = newnode;
	}
	return (*head);
}
