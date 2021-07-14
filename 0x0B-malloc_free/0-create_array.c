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


	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
