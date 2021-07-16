#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory mimicking malloc
 * @nmemb: number of blocks to be allocated
 * @size: size of each block
 * Return: pointer to the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	usigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (ptr);
}
