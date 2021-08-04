#include "lists.h"

/**
 * pop_listin - deletes the head node and returns its data
 * @head: head pointer
 * Return: data contained in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *traverse, *store;

	int hdata;

	if (*head == NULL)
		return (0);

	traverse = *head;

	hdata = traverse->n;

	store = traverse->next;

	free(traverse);

	*head = store;

	return (hdata);
}
