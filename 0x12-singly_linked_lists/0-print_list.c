#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - prints all the members of the data structure
 * @h: pointer to a struct data type
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n",0, "(nil)");
		printf("[%d] %s\n",h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
i
