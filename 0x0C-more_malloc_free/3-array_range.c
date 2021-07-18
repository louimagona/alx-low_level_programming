#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - prints range from min to max
 * @min: the starting point
 * @max: the end point of the range
 * Return: pointer to the allocated memory location
 */

int *array_range(int min, int max)
{
	int i;

	unsigned int len;

	int *ptr;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = min;
		i++;
		min++
	}
	return (ptr);
}
