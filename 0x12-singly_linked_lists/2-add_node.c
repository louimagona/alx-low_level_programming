#include "lists.h"

/**
 * add_node - adds a node at beginning of the list
 * @head: pointer to pointer head
 * @str: string to be copied to the new node
 * Return: pointer to newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	unsigned int i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	return (*head);
}

