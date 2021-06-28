#include "holberton.h"

/**
 * swap_int - swap the values of two variables.
 *@a: variable pointer 1
 *@b: variable pointer 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
