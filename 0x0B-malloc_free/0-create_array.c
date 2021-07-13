#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array to be created
 * @c:first char of array
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i;

	p = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	free(p);
	return (p);
}
