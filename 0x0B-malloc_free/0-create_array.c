#include "holberton.h"

/**
 * create_array - creates an array of chars 
 * @size: size of array to be created
 * @c:first char of array
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char ptr = create_array;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	ptr[0] = c;
	return (ptr);
}
