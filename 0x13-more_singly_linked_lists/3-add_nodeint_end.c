#include "lists.h"

/**
 * add_nodeint_end - adds a node at beginning of list
 * @head: head pointer
 * @n: some value added I dont see for what
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *newnode, *temp;

        newnode = (listint_t *)malloc(sizeof(listint_t));
        if (newnode == NULL)
                return (NULL);

	temp = *head;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}

        return (*head);
}
