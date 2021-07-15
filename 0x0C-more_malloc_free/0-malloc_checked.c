#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: parameter supplied as an int
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
