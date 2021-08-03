#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: head pointer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *traverse;

	traverse = head;

	while (traverse != NULL)
	{
		free(traverse);
		traverse = traverse->next;
	}
	free(head);
}
