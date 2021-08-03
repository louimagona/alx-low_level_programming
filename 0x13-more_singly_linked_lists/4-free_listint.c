#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: head pointer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *traverse;

	while (head != NULL)
	{
		traverse = head;
		head = head->next;
		free(traverse);
	}
}
