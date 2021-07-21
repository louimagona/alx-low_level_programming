#include "function_pointers.h"
/**
 * int_index - serche for a matching integer from array
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * @array: array of ints supplied
 * Return: index of the first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp && size)
	{
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]))
		{
			break;
		}
		if (i == size - 1 && !cmp(array[i]))
		{
			return (-1);
		}
	}
	}
	return (i);
}
