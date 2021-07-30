#include "lists.h"

/**
 * add_node - insert new node at end of a list
 * @head: pointer to beginning of the list
 * @str: string to be copied
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	unsigned int i;

	newnode = (list_t*)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	newnode->len = i;
	newnode -> next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (*head);
}
