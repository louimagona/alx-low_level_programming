#include "lists.h"

/**
 * free_listint2 - frees the linked list and sets head to null
 * @head: head pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *traverse, *store;

	traverse = *head;

	store = *head;

	while (traverse != NULL)
	{
		store = store->next;
		free(traverse);
		traverse = store;
	}
	*head = NULL;
}
